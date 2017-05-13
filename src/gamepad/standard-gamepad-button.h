// This file is part of GNOME Games. License: GPL-3.0+.

#ifndef GAMES_STANDARD_GAMEPAD_BUTTON_H
#define GAMES_STANDARD_GAMEPAD_BUTTON_H

#include <glib-object.h>
#include <linux/input-event-codes.h>

G_BEGIN_DECLS

#define GAMES_TYPE_STANDARD_GAMEPAD_BUTTON (games_standard_gamepad_button_get_type ())

/**
 * GamesStandardGamepadButton:
 * @GAMES_STANDARD_GAMEPAD_BUTTON_UNKNOWN: an unknown button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_A: the A (south) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_B: the B (east) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_X: the X (west) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_Y: the Y (north) button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_L: the left shoulder button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_R: the right shoulder button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_L: the left trigger
 * @GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_R: the right trigger
 * @GAMES_STANDARD_GAMEPAD_BUTTON_SELECT: the Select button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_START: the Start button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_STICK_L: the left stick's button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_STICK_R: the right stick's button
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_UP: the up button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_DOWN: the down button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_LEFT: the left button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_RIGHT: the right button of the d-pad
 * @GAMES_STANDARD_GAMEPAD_BUTTON_HOME: the Home button
 *
 * The buttons of a standard gamepad.
 **/
typedef guint16 GamesStandardGamepadButton;
#define GAMES_STANDARD_GAMEPAD_BUTTON_UNKNOWN KEY_MAX
#define GAMES_STANDARD_GAMEPAD_BUTTON_A BTN_A
#define GAMES_STANDARD_GAMEPAD_BUTTON_B BTN_B
#define GAMES_STANDARD_GAMEPAD_BUTTON_X BTN_Y
#define GAMES_STANDARD_GAMEPAD_BUTTON_Y BTN_X
#define GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_L BTN_TL
#define GAMES_STANDARD_GAMEPAD_BUTTON_SHOULDER_R BTN_TR
#define GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_L BTN_TL2
#define GAMES_STANDARD_GAMEPAD_BUTTON_TRIGGER_R BTN_TR2
#define GAMES_STANDARD_GAMEPAD_BUTTON_SELECT BTN_SELECT
#define GAMES_STANDARD_GAMEPAD_BUTTON_START BTN_START
#define GAMES_STANDARD_GAMEPAD_BUTTON_STICK_L BTN_THUMBL
#define GAMES_STANDARD_GAMEPAD_BUTTON_STICK_R BTN_THUMBR
#define GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_UP BTN_DPAD_UP
#define GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_DOWN BTN_DPAD_DOWN
#define GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_LEFT BTN_DPAD_LEFT
#define GAMES_STANDARD_GAMEPAD_BUTTON_DPAD_RIGHT BTN_DPAD_RIGHT
#define GAMES_STANDARD_GAMEPAD_BUTTON_HOME BTN_MODE

GType games_standard_gamepad_button_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GAMES_STANDARD_GAMEPAD_BUTTON_H */
