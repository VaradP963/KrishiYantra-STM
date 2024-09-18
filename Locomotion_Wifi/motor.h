#ifndef motor_h
#define motor_h

//#define debug_motor
#include<analogWrite.h>
class motor {
  public:
    motor(int, int, bool);  // constructor
    motor(int, int);        // constructor 2.0
    void invert();
    void Forward(int, bool);
    void Forward(int, int, int, bool);
    void Forward(int);
    void Backward(int, int, int, bool);
    void Backward(int, bool);
    void Backward(int);
    void SetLimits(int, int);
    void setSampling(int);
    void invertDirection();
    void setStep(int);
    void PWM(int, bool);
    void PWM(int, int);
    void Stop(bool);
    void Stop();
  private:
    int dirPin, pwmPin, dir, Pwm;
    int outMin, outMax, out, _step;
    unsigned long sampleTime, pTime;  // sampling
    void AccelnDecel(int);
    void AccelnDecel(int, int);
    void AccelnDecel2(int);
    void AccelnDecel2(int, int);
    int duration;

};
#endif
