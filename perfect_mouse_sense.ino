#include <Mouse.h>

const int TASTER = 9;

void setup() {
  {
    pinMode(TASTER, INPUT_PULLUP);
  }

}

void loop() {
  if (digitalRead(TASTER) == LOW)
  {
    delay(100);

    for (int i = 0; i < 6000; i++)
    {
      Mouse.move(-1, 0, 0);
    }
    Mouse.press(MOUSE_RIGHT);
    delay(1300);

    for (int i = 0; i < 6000  ; i++)
    {
      Mouse.move(+1, 0, 0);
    }
    delay(2000);

    Mouse.release(MOUSE_RIGHT);
  }
}
