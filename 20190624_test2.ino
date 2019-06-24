/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 24 Jun 2019 12:21:40 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteButton button1;
LRemoteButton button2;
LRemoteLabel label2;

void setup()
{
  LRemote.setName("grace2003");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("Bluetooth Testing");
    label1.setSize(5, 1);
    label1.setColor(RC_ORANGE);
    LRemote.addControl(label1);

    button1.setPos(0, 1);
    button1.setText("ON");
    button1.setSize(2, 1);
    button1.setColor(RC_ORANGE);
    LRemote.addControl(button1);

    button2.setPos(3, 1);
    button2.setText("OFF");
    button2.setSize(2, 1);
    button2.setColor(RC_ORANGE);
    LRemote.addControl(button2);

    label2.setPos(0, 5);
    label2.setText("Homemade by 林昕穎");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (button1.isValueChanged()) {
    if (button1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);

    }

  }
  if (button2.isValueChanged()) {
    if (button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
  delay(1000);
}