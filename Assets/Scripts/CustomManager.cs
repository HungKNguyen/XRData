using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RuntimePresets;
using UnityEngine.XR.Interaction.Toolkit;
using CustomEnums;

public class CustomManager : MonoBehaviour
{
    // Array to control SnapTurnProvider Settings
    [SerializeField] Preset[] settings;

    // Reference to LocomotionSystem
    [SerializeField] LocomotionSystem system;

    // Reference to SnapTurnProvider
    [SerializeField] ActionBasedSnapTurnProvider snapTurnProvider;

    // Keep track of the controller
    bool leftControllerTurn;
    bool rightControllerTurn;

    public void EnableSnapTurnFor(Controller controller)
    {
        if (controller == Controller.Left) {
            leftControllerTurn = true;
        } else if (controller == Controller.Right) {
            rightControllerTurn = true;
        } else {
            Debug.LogError($"Invalid value for EnableSnapTurnFor {controller}");
        }
        ConfigureSnapTurnProvider();
    }

    public void DisableSnapTurnFor(Controller controller)
    {
        if (controller == Controller.Left) {
            leftControllerTurn = false;
        } else if (controller == Controller.Right) {
            rightControllerTurn = false;
        } else {
            Debug.LogError($"Invalid value for DisableSnapTurnFor {controller}");
        }
        ConfigureSnapTurnProvider();
    }

    void ConfigureSnapTurnProvider()
    {
        // Change if allow hands
        if (leftControllerTurn && rightControllerTurn) {
            settings[0].ApplyTo(snapTurnProvider);
        } else if (leftControllerTurn) {
            settings[1].ApplyTo(snapTurnProvider);
        } else if (rightControllerTurn) {
            settings[2].ApplyTo(snapTurnProvider);
        } else {
            settings[3].ApplyTo(snapTurnProvider);
        }

        // Hook up locomotion system
        snapTurnProvider.system = system;
    }
}
