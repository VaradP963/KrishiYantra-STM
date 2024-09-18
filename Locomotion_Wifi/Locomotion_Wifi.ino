#include <WiFi.h>
#include "motor.h"

const char* ssid = "#TRF@1234";
const char* password = "#TRF@1234";
motor w2(13, 12, false);   // front-right
motor w1(14, 27, true);   // front-left
char Com;
WiFiServer server(80);
#define s 200
#define s1 -100
#define s2 -200
#define step_ 100
#define step_1 200

void setup() {
  Serial.begin(115200);
  WiFi.softAP(ssid, password);
  server.begin();
  Serial.print("AP IP address: ");
  Serial.println(WiFi.softAPIP());
  w1.setStep(step_);
  w2.setStep(step_);
}

void loop() {

  WiFiClient client = server.available();
  if (client) {
    String data = client.readStringUntil('\r');
    client.flush();
    client.stop();
    Serial.println("Received data: " + data);
    Com = data[0];
  }
  switch (Com) {
    case 'F':
      Serial.println("F");
      forward();
      break;
    case 'B':
      Serial.println("B");
      backward();
      break;
    case 'L':
      Serial.println("L");
      left();
      break;
    case 'R':
      Serial.println("R");
      right();
      break;
    case 'G':
      Serial.println("G");
      left2();
      break;
    case 'U':
      Serial.println("U");
      right2();
      break;
    case 'S':
      Serial.println("S");
      stopAll();
      break;
    case 'q':
      w1.invert();
      w2.invert();
      Com = 'S';
      break;
    default:
      Serial.println("s");
      stopAll();
      break;
  }

  // Handle other tasks if needed
}

void forward() {
  w1.PWM(s, true);
  w2.PWM(s, true);
}
void backward() {
  w1.PWM((-1)*s, true);
  w2.PWM((-1)*s, true);
}
void left() {
    w1.setStep(step_1);
  w2.setStep(step_1);
  w1.PWM(s, true);
  w2.PWM(s1, true);
    w1.setStep(step_);
  w2.setStep(step_);
}
void right() {
    w1.setStep(step_1);
  w2.setStep(step_1);
  w1.PWM(s1, true);
  w2.PWM(s, true);
    w1.setStep(step_);
  w2.setStep(step_);
}

void left2() {
  w1.PWM(s, true);
  w2.PWM(s2, true);
}
void right2() {
  w1.PWM(s2, true);
  w2.PWM(s, true);
}
void stopAll() {
    w1.setStep(step_1);
  w2.setStep(step_1);
  w1.PWM(0, true);
  w2.PWM(0, true);
    w1.setStep(step_);
  w2.setStep(step_);
}
