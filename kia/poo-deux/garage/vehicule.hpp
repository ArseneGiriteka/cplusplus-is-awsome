#ifndef VEHICULE_DEF
#define VEHICULE_DEF

#include <iostream>
#include <string>


class Vehicule{
    public:
    Vehicule();
    Vehicule(int prix);
    Vehicule(int prix,std::string madeDate);
    virtual ~Vehicule();
    virtual void afficher()const;

    protected:
    int m_prix;
    std::string m_madeDate;
};

#endif