#ifndef NUBERS_TYPES_H
#define NUBERS_TYPES_H

#include "QApplication"

class integer
{
 public:
   void operator=(int b);
   int operator+(int b);
   double operator+(double b);
   int operator-(int b);
   double operator-(double b);
   int operator*(int b);
   double operator*(double b);
   int operator/(int b);
   double operator/(double b);
   bool operator<(int b);
   bool operator<(double b);
   bool operator>(int b);
   bool operator>(double b);
   int operator%(int b);
   int getValue();
   void setValue(int b);
 protected:
    int value;
    QString massage;
};

#endif // NUBERS_TYPES_H
