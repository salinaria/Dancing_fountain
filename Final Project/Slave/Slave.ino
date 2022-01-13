#include <SPI.h>

#define out0 2
#define out1 3
#define out2 4
#define out3 5

const int MISO_PIN = 50, MOSI_PIN = 51, SCK_PIN = 52, SS_PIN = 53;
volatile boolean finished = false;
char message[5];
int del = 100;

void show(char key) {
  if (key == 'A' or key == 'a') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(3 * del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2 * del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'B' or key == 'b') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2 * del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out3, LOW);
    delay(2 * del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'C' or key == 'c') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(5 * del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'D' or key == 'd'){
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(5*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'E' or key == 'e'){
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(2*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(2*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'F' or key == 'f') {
    digitalWrite(out0, HIGH);
    delay(4*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'G' or key == 'g') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(2*del);  
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'H' or key == 'h') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(3*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(3*del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'I' or key == 'i' ) {
    digitalWrite(out0, HIGH);
    delay(7 * del);
    digitalWrite(out0, LOW);
  }
  else if (key == 'J' or key == 'j'){
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(del);
    digitalWrite(out0, LOW);
    delay(4*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'K' or key == 'k') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, LOW);
    delay(2*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, LOW);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, LOW);
    delay(2*del);
    digitalWrite(out2, LOW);
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'L' or key == 'l') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(6 * del);
    digitalWrite(out0, LOW);
  }
  else if (key == 'M' or key == 'm') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(3*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(2*del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'N' or key == 'n') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out2, HIGH);
    delay(2*del);
    digitalWrite(out1, HIGH);
    delay(del);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out1, LOW);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'O' or key == 'o') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(5*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'P' or key == 'p') {
    digitalWrite(out0, HIGH);
    delay(3*del);
    digitalWrite(out3, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'Q' or key == 'q') {
    digitalWrite(out3, HIGH);
    delay(3*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'R' or key == 'r') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out3, LOW);
    digitalWrite(out2, HIGH);
    delay(2*del);
    digitalWrite(out2, LOW);
    digitalWrite(out1, HIGH);
    delay(del);
    digitalWrite(out3, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out2, LOW);
    digitalWrite(out1, LOW);
    delay(del);
    digitalWrite(out2, HIGH);
    digitalWrite(out1, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'S' or key == 's') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out3, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(2*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'T' or key == 't') {
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(6*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'U' or key == 'u') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(6*del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'V' or key == 'v') {
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(2*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(4*del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'W' or key == 'w') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(2*del);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(2*del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(3*del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'X' or key == 'x') {
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del*2);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    delay(3*del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(2*del);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);
  }
  else if (key == 'Y' or key == 'y') {
    digitalWrite(out2, HIGH);
    digitalWrite(out1, HIGH);
    delay(3*del);
    digitalWrite(out0, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    delay(del*2);
    digitalWrite(out0, LOW);
    digitalWrite(out3, LOW);    
  }
  else if (key == 'Z' or key == 'z') {
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    delay(2*del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, HIGH);
    delay(del);
    digitalWrite(out1, LOW);
    digitalWrite(out2, HIGH);
    delay(del);
    digitalWrite(out2, LOW);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, HIGH);
    digitalWrite(out1, HIGH);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, HIGH);
    delay(del);
    digitalWrite(out0, LOW);
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);    
  }
}

void setup() {
  pinMode(out0, OUTPUT);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(MOSI_PIN, INPUT);
  pinMode(MISO_PIN, OUTPUT);
  pinMode(SCK_PIN, INPUT);
  pinMode(SS_PIN, INPUT_PULLUP);
  SPCR |= _BV(SPE);
  SPI.attachInterrupt();
}

void loop() {
  if (finished) {
    show(message[0]);
    finished = false;
  }
}

ISR (SPI_STC_vect)
{
  byte c = SPDR;
  message[0] = c;
  finished = true;
}
