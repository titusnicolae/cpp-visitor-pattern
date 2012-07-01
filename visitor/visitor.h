#include <iostream>
class Integer;

class Complex;
class Number
{ public:
  virtual Number* mul(Number* )=0;
  virtual Number* mul(Complex* )=0;
  virtual Number* mul(Integer* )=0;
  virtual void print()=0; 
};

class Integer : public Number
{ int x; 
  public:
  Integer(int x);
  Number* mul(Number *n);
  Number* mul(Integer *n);
  Number* mul(Complex *n);
  int value();
  void print();
};

class Complex : public Number
{ int x,y; 
  public:
  Complex(int x,int y);
  Number* mul(Number *n);
  Number* mul(Integer* n);
  Number* mul(Complex*n);
  int real();
  int imag();
  void print();
};

