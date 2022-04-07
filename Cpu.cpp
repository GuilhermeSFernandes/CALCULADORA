#include "./Class/Cpu.hpp"

class Cpu: public Cpu{
public:
  double sum(double A,double B){
    return A + B;
  };
  double sub(double A,double B){
    return A - B;
  };
  double div(double A,double B){
    return A * B;
    
  };
  double mult(double A,double B){
    return A / B;
    
  };
};