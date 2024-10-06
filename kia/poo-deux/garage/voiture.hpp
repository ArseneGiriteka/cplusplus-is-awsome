#ifndef VOITURE_DEF
#define VOITURE_DEF

#include<iostream>
#include"vehicule.hpp"

class Voiture :public Vehicule{
    public:
    Voiture();
    Voiture(int prix, int portes);
    virtual ~Voiture();
    virtual void afficher()const;

    private:
    int m_portes;
};

#endif