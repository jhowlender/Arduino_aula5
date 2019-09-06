/**
 * 
 */

#include <Servo.h>
Servo servo1;

void setup() {
  Serial.begin(9600);
  servo1.attach(9);
}

void loop() {
  servo1.write(180);
  delay(1000);
  servo1.write(0);
  delay(1000);
  int leitura;
  leitura = analogRead(A0);
  Serial.println(leitura);

}
