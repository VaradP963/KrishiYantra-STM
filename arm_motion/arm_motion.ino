#include <Braccio.h>
#include <Servo.h>


Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;


int l1 = 14;
int l2 = 18;
int t1 = 0;
int t2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Braccio.begin();
}

void loop() {
  x();
  delay(1000);
  y();
 
}




void x() {
  for (int i = 24; i < 30; i++) {
    Serial.println("*");
    Serial.println(i);
    calculateIK(i, 5);
    Serial.print(t1);
    Serial.print(" ");
    Serial.println(t2);
    Braccio.ServoMovement(20, 90, t1, 90 + t2, 90, 90, 73);
  }

  // delay(400);

  for (int i = 30; i > 24; i--) {
    Serial.println("*");
    Serial.println(i);
    calculateIK(i, 5);
    Serial.print(t1);
    Serial.print(" ");
    Serial.println(t2);
    Braccio.ServoMovement(20, 90, t1, 90 + t2, 90, 90, 73);
  }
}



void y() {
  for (int i = 0; i < 20; i++) {
    Serial.println("*");
    Serial.println(i);
    calculateIK(12, i);
    Serial.print(t1);
    Serial.print(" ");
    Serial.println(t2);
    Braccio.ServoMovement(20, 90, t1, 90 + t2, 90, 90, 73);
  }

  for (int i = 20; i > 0; i--) {
    Serial.println("*");
    Serial.println(i);
    calculateIK(12, i);
    Serial.print(t1);
    Serial.print(" ");
    Serial.println(t2);
    Braccio.ServoMovement(20, 90, t1, 90 + t2, 90, 90, 73);
  }
}


void calculateIK(int x, int y) {
  float l3 = sqrt(pow(x, 2) + pow(y, 2));

  float a1 = atan2(y, x);

  float a2 = acos((pow(l1, 2) + pow(l3, 2) - pow(l2, 2)) / (2 * l1 * l3));

  float a3 = acos((pow(l1, 2) + pow(l2, 2) - pow(l3, 2)) / (2 * l1 * l2));

  t1 = degrees(a1) + degrees(a2);
  t2 = degrees(a3) - 180;
}