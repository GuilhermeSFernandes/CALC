#include "../Interface/ICpu.hpp"


class Cpu: public ICpu{
  double getNumber();
  double result;
public:
  double sum(double A,double B);
  double sub(double A,double B);
  double div(double A,double B);
  double mult(double A,double B);
};