#include <SPI.h>

const int SS0_PIN = 44, SS1_PIN = 45, SS2_PIN = 46;
char message[20];
int ind = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Starting master");
  pinMode(SS0_PIN, OUTPUT);
  digitalWrite(SS0_PIN, HIGH);
  pinMode(SS1_PIN, OUTPUT);
  digitalWrite(SS1_PIN, HIGH);
  pinMode(SS2_PIN, OUTPUT);
  digitalWrite(SS2_PIN, HIGH);
  SPI.begin();
}

void loop() {
  if (Serial.available() > 0) {
    char key = Serial.read();
    if (key == '.') {
      ind = 0;
      Serial.println();
      digitalWrite(SS0_PIN, LOW);
      SPI.transfer(message[0]);
      digitalWrite(SS0_PIN, HIGH);
      digitalWrite(SS1_PIN, LOW);
      SPI.transfer(message[1]);
      digitalWrite(SS1_PIN, HIGH);
      digitalWrite(SS2_PIN, LOW);
      SPI.transfer(message[2]);
      digitalWrite(SS2_PIN, HIGH);
    } else {
      message[ind] = key;
      ind++;
    }
  }
}
