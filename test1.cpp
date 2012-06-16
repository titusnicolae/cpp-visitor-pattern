#include "test1.h"
#include <iostream>

Numeric::Numeric()
{}

Numeric::Numeric(int i)
{ this->n=new Integer(i);
}

Numeric::Numeric(double f)
{ this->n=new Float(f);
}
void Numeric::print() 
{ this->n->print(); 
}

Float::Float(double f)
{ this->f=f; 
}
void Float::print() 
{ std::cout<<this->f<<std::endl;
}

Integer::Integer(int i)
{ this->i=i;
}
void Integer::print() 
{ std::cout<<this->i<<std::endl;
}

int main ()
{
  Numeric *n1=new Numeric(100);
  Numeric *n2=new Numeric((double)100.2);
  n1->print();
  n2->print();
   
  return 0;
}
