/**
 * @file    Settings.h
 *
 * This file contains various settings and enumerations that you will need to use in the various
 * assignments. The settings are bound to the GUI via static data bindings.
 */

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include "RGBA.h"

// Enumeration values for the Brush types from which the user can choose in the GUI.
enum BrushType {
    BRUSH_CONSTANT,
    BRUSH_LINEAR,
    BRUSH_QUADRATIC,
    BRUSH_SMUDGE,
    BRUSH_SPECIAL_1,
    BRUSH_SPECIAL_2,
    NUM_BRUSH_TYPES
};

// Enumeration values for the Filters that the user can select in the GUI.
enum FilterType {
    FILTER_EDGE_DETECT,
    FILTER_BLUR,
    FILTER_SCALE,
    FILTER_ROTATE,
    FILTER_SPECIAL_1,
    FILTER_SPECIAL_2,
    FILTER_SPECIAL_3,
    NUM_FILTER_TYPES
};

// Enumeration values for the Shapes that the user can select in the GUI.
enum ShapeType {
    SHAPE_CUBE,
    SHAPE_CONE,
    SHAPE_SPHERE,
    SHAPE_CYLINDER,
    SHAPE_TORUS,
    SHAPE_SPECIAL_1,
    SHAPE_SPECIAL_2,
    NUM_SHAPE_TYPES
};

enum TextureType {
    TEXTURE_1,
    TEXTURE_2,
    TEXTURE_3,
    TEXTURE_4
};

enum IntersectionType {
    NONE,
    SPHERE,
    HOLE
};

// Enumeration values for the two tabs (2D, 3D) at the bottom of the Window.
enum UITab {
    TAB_2D,
    TAB_3D,
    NUM_TABS
};

// Enumeration values for the currently selected scene type
enum SceneMode {
    SCENEMODE_SHAPES,
    SCENEMODE_SCENEVIEW
};

// Enumeration values for the currently selected camera type
enum CameraMode {
    CAMERAMODE_ORBIT,
    CAMERAMODE_CAMTRANS
};

/**
 * @struct Settings
 *
 * Stores application settings for the CS123 GUI.
 *
 * You can access all app settings through the "settings" global variable.
 * The settings will be automatically updated when things are changed in the
 * GUI (the reverse is not true however: changing the value of a setting does
 * not update the GUI).
*/
struct Settings {
    // Loads settings from disk, or fills in default values if no saved settings exist.
    void loadSettingsOrDefaults();

    // Saves the current settings to disk.
    void saveSettings();

    // Brush
    int brushType;      // The user's selected brush @see BrushType

    RGBA brushColor;
    bool fixAlphaBlending;

    // Filter
    int filterType;               // The selected filter @see FilterType
    float edgeDetectSensitivity;  // Edge detection sensitivity, from 0 to 1.
    int blurRadius;               // Selected blur radius
    float scaleX;                 // Horizontal scale factor
    float scaleY;                 // Vertical scale factor
    int rotateAngle;              // Rotation angle in degrees

    // Shapes
    bool useSceneviewScene;
    int textureType;              // Selected shape type
    int shapeParameter1;
    int shapeParameter2;
    bool useLighting;           // Enable default lighting
    bool drawWireframe;         // Draw wireframe only
    bool drawNormals;           // Turn normals on and off
    bool clipLeftCorner;        // Clip the left corner
    bool clipRightCorner;       // Clip the right corner
    int intersectionType;
    float intersectionRadius;
    bool upWind;            // Enable upwards wind
    bool leftWind;     // Enable leftward wind
    bool rightWind;         // Enable rightward wind


    // Camtrans
    bool useOrbitCamera;        // Use the built-in orbiting camera instead of the Camtrans camera
    float cameraPosX;
    float cameraPosY;
    float cameraPosZ;
    float cameraRotU;
    float cameraRotV;
    float cameraRotN;
    float cameraFov;            // The camera's field of view, which is twice the height angle.
    float cameraNear;           // The distance from the camera to the near clipping plane.
    float cameraFar;            // The distance from the camera to the far clipping plane.

    // Modeler
    int objTool;                // The currently selected modeler tool.

    // Ray


    bool useRefraction;         // Enable or disable refraction (this is extra credit).
    bool useMultiThreading;     // Enable or disable multi-threading (extra credit).
    bool usePointLights;        // Enable or disable point lighting.
    bool useDirectionalLights;  // Enable or disable directional lighting (extra credit).
    bool useSpotLights;         // Enable or disable spot lights (extra credit).
    bool useKDTree;

    int getSceneMode();
    int getCameraMode();

    int currentTab;

};

// The global Settings object, will be initialized by MainWindow
extern Settings settings;

#endif // SETTINGS_H
