#ifndef MOTO_DEF
#define MOTO_DEF

#include<iostream>
#include"vehicule.hpp"

class Moto :public Vehicule{
    public:
    Moto();
    Moto(int prix, double speed);
    virtual ~Moto();//to destruct the real class 
    virtual void afficher()const;

    private:
    double m_vitesse;
};

#endif