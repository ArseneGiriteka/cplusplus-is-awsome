#include "arthimeticFonction.h"

//addition
double arthimecsFonctions::addition(int a,int b)
{
    return a+b;
}

double arthimecsFonctions::addition(double a,double b)
{
    return a+b;
}

double arthimecsFonctions::addition(int a,double b)
{
    return a+b;
}

double arthimecsFonctions::addition(double a,int b)
{
    return a+b;
}

//soustraction
int arthimecsFonctions::soustraction(int a,int b)
{
    return a-b;
}

double arthimecsFonctions::soustraction(double a,double b)
{
    return a-b;
}

double arthimecsFonctions::soustraction(int a,double b)
{
    return a-b;
}

double arthimecsFonctions::soustraction(double a,int b)
{
    return a-b;
}

//multiplication
double arthimecsFonctions::multiplication(int a,int b)
{
    return a*b;
}

double arthimecsFonctions::multiplication(int a,double b)
{
    return a*b;
}

double arthimecsFonctions::multiplication(double a,int b)
{
    return a*b;
}

double arthimecsFonctions::multiplication(double a,double b)
{
    return a*b;
}

double arthimecsFonctions::division(int a,int b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
       QString warning("le denominateur doit etre different de zero");
       return 0;
    }

}

double arthimecsFonctions::division(double a,double b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
       QString warning("le denominateur doit etre different de zero");
       return 0;
    }
}

double arthimecsFonctions::division(int a,double b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
       QString warning("le denominateur doit etre different de zero");
       return 0;
    }
}

double arthimecsFonctions::division(double a,int b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
       QString warning("le denominateur doit etre different de zero");
       return 0;
    }
}
