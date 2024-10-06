#ifndef ARTHIMETICFONCTION_H
#define ARTHIMETICFONCTION_H

#include<QApplication>
#include<QtWidgets>
#include "NUMBERS_TYPES_INTEGER.h"

class arthimecsFonctions
{
public:
//-----------------------------------
//addition
double addition(int a,int b);
double addition(double a,double b);
double addition(int a,double b);
double addition(double a,int b);
//soustraction
int soustraction(int a,int b);
double soustraction(double a,double b);
double soustraction(int a,double b);
double soustraction(double a,int b);
//multiplication
double multiplication(int a,int b);
double multiplication(int a,double b);
double multiplication(double a,int b);
double multiplication(double a,double b);
//division
double division(int a,int b);
double division(double a,double b);
double division(double a,int b);
double division(int a,double b);
//--------------------------------------
bool operator<(double const& a);
bool operator>(double const& a);
bool operator=(double b);
bool operator<=(double a);
bool operator>=(double a);
double operator+=(double a);
double operator-=(double a);
double operator*=(double a);
double operator/=(double a);
double operator+(double a);
double operator-(double a);
double operator*(double a);
double operator/(double a);
//____________________________________________________
protected:

};
#endif // ARTHIMETICFONCTION_H
