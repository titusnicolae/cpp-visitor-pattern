#include "visitor.h"
#include <iostream>

Integer::Integer(int x)
{ this->x=x;
} 
Number* Integer::mul(Number *n)
{ n->mul(this); 
}  
Number* Integer::mul(Integer *n)
{ std::cout<<"Integer Integer"<<std::endl;
  return new Integer(this->value()*n->value());  
} 
Number* Integer::mul(Complex *n)
{ std::cout<<"Complex Integer"<<std::endl;
  return new Complex(this->value()*n->real(),this->value()*n->imag());
}
int Integer::value()
{ return x;
}
void Integer::print()
{ std::cout<<x<<std::endl;
} 

Complex::Complex(int x,int y)
{ this->x=x;
  this->y=y;
}
Number* Complex::mul(Number *n)
{ n->mul(this);
} 
Number*  Complex::mul(Integer* n)
{ std::cout<<"Integer Complex"<<std::endl;
  return new Complex(this->real()*n->value(),this->imag()*n->value());  
}

Number*  Complex::mul(Complex*n)
{ std::cout<<"Complex Complex"<<std::endl;
  return new Complex(this->real()*n->real()-this->imag()*n->imag(),
                     this->real()*n->imag()+this->imag()*n->real()); 
}
int  Complex::real()
{ return x;
}
int  Complex::imag()
{ return y;
}
void Complex::print()
{ std::cout<<x<<"+"<<y<<"i"<<std::endl;
}

int main ()
{
  Number *i=new Integer(2);
  Number *c=new Complex(3,4);
  i->print();
  c->print();
  i->mul(i)->print();
  i->mul(c)->print();
  c->mul(i)->print();
  c->mul(c)->print();
  return 0;
}
