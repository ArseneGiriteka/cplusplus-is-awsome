#include"NUMBERS_TYPES_INTEGER.h"

int integer::operator+(int b)
{
    return value+b;
}

double integer::operator+(double b)
{
    return value+b;
}

int integer::operator-(int b)
{
    return value-b;
}

double integer::operator-(double b)
{
    return value-b;
}

 int integer::operator*(int b)
 {
     return value*b;
 }

 double integer::operator*(double b)
 {
     return value*b;
 }

 int integer::operator/(int b)
 {
     if(b!=0) return value/b;
     else
     {
         massage="error";
         return 0;
     }
 }

 double integer::operator/(double b)
 {
     if(b!=0) return value/b;
     else
     {
         massage="error";
         return 0;
     }
 }

 int integer::operator%(int b)
 {
     return value%b;
 }

 bool integer::operator>(int b)
 {
    return value>b;
 }

 bool integer::operator>(double b)
 {
     return value>b;
 }

 bool integer::operator<(int b)
 {
     return value<b;
 }

 bool integer::operator<(double b)
 {
     return value<b;
 }

 void integer::operator=(int b)
 {
     value=b;
 }

 int integer::getValue()
 {
    return value;
 }

 void integer::setValue(int b)
 {
     value=b;
 }
