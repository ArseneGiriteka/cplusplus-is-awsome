#ifndef CAMION_DEF
#define CAMION_DEF

#include<iostream>
#include"vehicule.hpp"

class Camion:public Vehicule
{
    public:
    Camion(/* args */);
    Camion(int prix, int poids);
    virtual ~Camion();
    virtual void afficher()const;

    private:
    /* data */
    int m_poids;
};


#endif