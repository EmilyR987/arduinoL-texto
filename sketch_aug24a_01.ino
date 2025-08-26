#include <Keyboard.h>

void setup() {
 Keyboard.begin();
 delay(5000);
 Keyboard.print("olá, sou o Arduino leonardo")
 Keyboard.write(KEY_RETURN);
 Keyboard.end();
}

void loop() {
}