#include <Arduino.h>
#include "motor.h"


motor::motor(int DirPin, int PwmPin, bool Dir) {
  dirPin = DirPin;
  pwmPin = PwmPin;
  pinMode(DirPin, OUTPUT);
  pinMode(PwmPin, OUTPUT);
  SetLimits(0, 255);
  _step = 7;
  out = 0;
  pTime = millis() - sampleTime;
  sampleTime = 30UL;
  duration = 500;

  if (Dir) {
    dir = 1;
  }
  else {
    dir = 0;
  }
}

motor::motor(int DirPin, int PwmPin)
  : motor::motor(DirPin, PwmPin, true) {
}

void motor::Forward(int Pwm, bool ad) {
  if (ad && (out != Pwm)) {
    AccelnDecel(Pwm);
  } else {
    out = Pwm;
  }

  out = constrain(out, outMin, outMax);
  digitalWrite(dirPin, dir);
  analogWrite(pwmPin, out);

#ifdef debug_motor
  Serial.print("f-") ;
  Serial.println(out);
#endif
}

void motor::Forward(int Pwm, int Mul, int pidOut , bool ad) {

  if (ad && (out != Pwm)) {
    AccelnDecel(Pwm);
  } else {
    out = Pwm;
  }

  int pwm = out + (Mul * pidOut);

#ifdef debug_motor
  Serial.print("f|o-") ;
  Serial.print(out);
  Serial.print(" p-") ;
  Serial.print(Mul * pidOut);
  Serial.print("| s-") ;
  Serial.println(pwm);
#endif

  pwm = constrain(pwm, outMin, outMax);

  digitalWrite(dirPin, dir);
  analogWrite(pwmPin, pwm);
}


void motor::Forward(int Pwm) {
  Forward(Pwm, false);
}

void motor::Backward(int Pwm, bool ad) {
  if (ad && (out != Pwm)) {
    AccelnDecel(Pwm);
  } else {
    out = Pwm;
  }

  out = constrain(out, outMin, outMax);

  digitalWrite(dirPin, !dir);
  analogWrite(pwmPin, Pwm);

#ifdef debug_motor
  Serial.print("b-");
  Serial.println(out);
#endif
}

void motor::Backward(int Pwm, int Mul, int pidOut, bool ad) {
  if (ad && (out != Pwm)) {
    AccelnDecel(Pwm);
  } else {
    out = Pwm;
  }

  int pwm = out + (Mul * pidOut);

#ifdef debug_motor
  Serial.print("b|o-") ;
  Serial.print(out);
  Serial.print(" p-") ;
  Serial.print(Mul * pidOut);
  Serial.print("| s-") ;
  Serial.println(pwm);
#endif

  pwm = constrain(pwm, outMin, outMax);

  digitalWrite(dirPin, !dir);
  analogWrite(pwmPin, pwm);

}

void motor::Backward(int Pwm) {
  Backward(Pwm, false);
}

void motor::SetLimits(int Min, int Max) {
  if (Min >= Max) return;
  outMin = Min;
  outMax = Max;
}

void motor::invert() {
  dir = !dir;
}
void motor::Stop(bool ad) {
  if (ad && out != 0) {
    AccelnDecel(0);
  } else {
    out = 0;
  }
  analogWrite(pwmPin, out);

#ifdef debug_motor
  Serial.print("s-") ;
  Serial.println(out);
#endif
}

void motor::Stop() {
  Stop(false);
}


void motor::AccelnDecel(int SetPoint)  // acceleration and decelration
{
  AccelnDecel(SetPoint, _step);
}

void motor::AccelnDecel2(int SetPoint)  // acceleration and decelration
{
  AccelnDecel2(SetPoint, _step);
}

void motor::AccelnDecel(int SetPoint, int Step)  // acceleration and decelration
{
  unsigned long cTime = millis();
  unsigned long timeChange = (cTime - pTime);
  if (timeChange >= sampleTime) {
    if (out != SetPoint) {
      if (SetPoint - Step <= out && out <= SetPoint + Step) {
        out = SetPoint;
      } else {
        if (out < SetPoint) {
          out = out + Step;
        } else if (out > SetPoint) {
          out = out - Step;
        }
      }
      pTime = cTime;
    }
  }
}

void motor::AccelnDecel2(int SetPoint, int Step)  // acceleration and decelration
{
  unsigned long cTime = millis();
  unsigned long timeChange = (cTime - pTime);
  if (timeChange >= sampleTime) {
    if (Pwm != SetPoint) {
      if (SetPoint - Step <= Pwm && Pwm <= SetPoint + Step) {
        Pwm = SetPoint;
      } else {
        if (Pwm < SetPoint) {
          Pwm = Pwm + Step;
        } else if (Pwm > SetPoint) {
          Pwm = Pwm - Step;
        }
      }
      pTime = cTime;
    }
  }
}


void motor::setSampling(int NewSampleTime) {
  sampleTime = (unsigned long)NewSampleTime;
}

void motor::setStep(int Speed) {
  if (Speed <= 0) return;
  int sample = (int) sampleTime;
  _step = Speed * sample / duration;
}

void motor::invertDirection() {
  dir = !dir;
}

void motor::PWM(int pwm, bool ad) {
  if (ad && (Pwm != pwm)) {
    AccelnDecel2(pwm);
  } else {
    Pwm = pwm;
  }

  bool Dir = dir;
  if (Pwm < 0) {
    Dir = !dir;
  }
  Serial.println(Pwm);
  analogWrite(pwmPin, abs(Pwm));
  digitalWrite(dirPin, Dir);
}

void motor::PWM(int pwm, int step) {
  if ((Pwm != pwm)) {
    AccelnDecel2(pwm, step);
  } else {
    Pwm = pwm;
  }

  bool Dir = dir;
  if (Pwm < 0) {
    Dir = !dir;
  }
  Serial.println(Pwm);
  analogWrite(pwmPin, abs(Pwm));
  digitalWrite(dirPin, Dir);
}
