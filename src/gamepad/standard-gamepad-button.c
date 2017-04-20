// This file is part of GNOME Games. License: GPL-3.0+.

#include "standard-gamepad-button.h"

GType
games_standard_gamepad_button_get_type (void)
{
  static volatile gsize type_id = 0;
  static const GEnumValue values[] = {
    { GAMES_STANDARD_GAMEPAD_BUTTON_UNKNOWN, "GAMES_STANDARD_GAMEPAD_BUTTON_UNKNOWN", "unknown" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_A, "GAMES_STANDARD_GAMEPAD_BUTTON_A", "a" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_B, "GAMES_STANDARD_GAMEPAD_BUTTON_B", "b" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_X, "GAMES_STANDARD_GAMEPAD_BUTTON_X", "x" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_Y, "GAMES_STANDARD_GAMEPAD_BUTTON_Y", "y" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_L, "GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_L", "shoulder-l" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_R, "GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_R", "shoulder-r" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_L, "GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_L", "trigger-l" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_R, "GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_R", "trigger-r" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_SELECT, "GAMES_STANDARD_GAMEPAD_BUTTON_SELECT", "select" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_START, "GAMES_STANDARD_GAMEPAD_BUTTON_START", "start" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_STICK_L, "GAMES_STANDARD_GAMEPAD_BUTTON_STICK_L", "stick-l" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_STICK_R, "GAMES_STANDARD_GAMEPAD_BUTTON_STICK_R", "stick-r" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_UP, "GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_UP", "dpad-up" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_DOWN, "GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_DOWN", "dpad-down" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_LEFT, "GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_LEFT", "dpad-left" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_RIGHT, "GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_RIGHT", "dpad-right" },
    { GAMES_STANDARD_GAMEPAD_BUTTON_HOME, "GAMES_STANDARD_GAMEPAD_BUTTON_HOME", "home" },
    { 0, NULL, NULL },
  };

  if (g_once_init_enter (&type_id))
    g_once_init_leave (&type_id,
                       g_enum_register_static ("GamesStandardGamepadButton",
                                               values));

  return type_id;
}
