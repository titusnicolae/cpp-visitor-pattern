#include <iostream>
class Number
{
  public:
  virtual void print() = 0;
};

class Numeric
{ protected:
  Number *n; 
   
  public:
  Numeric();
  Numeric(int i);
  Numeric(double f);
  void print();
};

class Float:public Number
{ private:
  double f;
  public:
  Float(double f);
  void print();
};
class Integer:public Number
{ private:
  int i;
  public:
  Integer(int g);
  void print();
};
