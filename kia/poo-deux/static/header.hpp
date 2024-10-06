#ifndef HEADER_DEF
#define HEADER_DEF

#include<iostream>

class Classica{
    public:
    Classica();
    ~Classica();
    static void salue();//static method
    static int nombreInstance();

    private:
    static int compteur;//static instance
    
};

#endif//