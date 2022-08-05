using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;
using CustomEnums;

/// <summary>
/// This class will handle what tool is being selected, as well as how to respond when custom action is being called
/// </summary>
public class CustomController : MonoBehaviour
{
    // Keep state of the tool
    int enumCount = Tool.GetNames(typeof(Tool)).Length;
    [SerializeField] Tool tool;

    // Keep state of the menu
    [SerializeField] SelectScript menu;
    bool menuToggle = false;
    MenuChoice menuChoosing = MenuChoice.None;

    // Keep state to manipulate library locomotion system
    [SerializeField] Controller controller;

    // Keep record of Controller Manager
    [SerializeField] CustomManager manager;

    // Keep state of tools
    bool locomotionActive;
    bool transformActive;
    bool examineActive;

    // Keep state of the Transformation tool
    bool scaleToggle;
    bool rotateToggle;
    
    
    // Start is called before the first frame update
    void Start()
    {
        // Start by not having the menu open
        menu.gameObject.SetActive(false);
        // Innitiate menu
        menu.setCurrent(tool);
        // Set up tool
        ConfigureTool();
        ActivateTool();
    }

    // Set tool state and ask manager to configure tool
    void ConfigureTool() 
    { 
        if (tool == Tool.Locomotion) {
        } else if (tool == Tool.Tranformation) {
            scaleToggle = false;
            rotateToggle = false;
        } else if (tool == Tool.Examine) {
        }
        manager.ConfigureToolFor(controller, tool);    
    }

    // Set tool active and ask manager to activate tool
    void ActivateTool()
    {
        if (tool == Tool.Locomotion) {
            locomotionActive = true;
        } else if (tool == Tool.Tranformation) {
            transformActive = true;
            scaleToggle = false;
            rotateToggle = false;
        } else if (tool == Tool.Examine) {
            examineActive = true;
        }
        manager.ActivateToolFor(controller);
    }

    // Set tool inactive and ask manager to disable tool
    void DisableTool()
    {
        if (tool == Tool.Locomotion) {
            locomotionActive = false;
        } else if (tool == Tool.Tranformation) {
            transformActive = false;
        } else if (tool == Tool.Examine) {
            examineActive = false;
        }
        manager.DisableToolFor(controller);
    }

    // To open/close menu
    public void OnOpenHandSelectionMenu() 
    {
        // If menu is already open
        if (menuToggle) {
            // Hide menu
            menu.gameObject.SetActive(false);
            ActivateTool();
        } else {
            // Show menu
            menu.gameObject.SetActive(true);
            DisableTool();
        }
        // Adjust state
        menuToggle = !menuToggle;
        menuChoosing = MenuChoice.None;
    }

    // To choose menu, implement later
    public void OnHandSelectionMenuSelect()
    {
        if (menuToggle && menuChoosing != MenuChoice.None) {
            tool = (Tool) menuChoosing;
            ConfigureTool();
            menu.setCurrent(tool);
        }
    }

    // Pressing this will toggle scale
    public void OnScaleToggle()
    {
        if (transformActive) {
            scaleToggle = !scaleToggle;
            Debug.Log($"[EDV] Scale Toggle set to {scaleToggle}");
        }
    }

    // Have not implemented
    public void OnRotationModifier(InputValue value)
    {
        if (transformActive) {
            float rawValue = value.Get<float>();
            // Enter condition
            if (rawValue > 0.6f)
            {
                rotateToggle = true;
            }

            if (rawValue < 0.3f)
            {
                rotateToggle = false;
            }
            Debug.Log($"[EDV] Rotate Modifier set to {rotateToggle}");
        }
    }

    // Have not implemented
    public void OnThumbstick(InputValue value)
    {
        Vector2 rawValue = value.Get<Vector2>();
        if (menuToggle) {
            // Do things for menu
            if (rawValue.magnitude < 0.5f) {
                menuChoosing = MenuChoice.None;
            } else {
                float angle = Vector2.SignedAngle(Vector2.right, rawValue);
                if (30.0f <= angle && angle < 150.0f) {
                    menuChoosing = MenuChoice.Locomotion;
                } else if (150.0f <= angle || angle < -90.0f) {
                    menuChoosing = MenuChoice.Tranformation;
                } else if (-90.0f <= angle && angle < 30.0f) {
                    menuChoosing = MenuChoice.Examine;
                } else {
                    Debug.LogError("[EDV] Math is not right OnThumbstick");
                }
            }
            menu.setChoosing(menuChoosing);
        } else if (transformActive) {
            if (scaleToggle) {
                // Do things for scale (vertical values)
                Debug.Log("[EDV] Thumbstick for scale");
            } else if (rotateToggle) {
                // Do things for rotate X (Veritcal) Z (Horizontal)
                Debug.Log("[EDV] Thumbstick for rotate");
            } else {
                // Default, also called anchor, vertical push and pull, horizontal rotate Y
                Debug.Log("[EDV] Thumbstick for achor");
            }
        }
        Debug.Log($"[EDV] Thumbstick register X : {rawValue.x}, Y : {rawValue.y}");
    }

    // This function call to deselect the current interactable (search force drop object - like in shooting games)
    // and then reset the object to be in front of the user, looking at the user, and at 0.5 height
    public void OnResetPosition()
    {
        if (tool == Tool.Tranformation) {
            Debug.Log("[EDV] Called Reset position");
        }
    }

}
