#ifndef PERSONNAGE_H_DEF
#define PERSONNAGE_H_DEF

#include<iostream>
#include<string>
#include"arme.h"

class Personnage{
    public:

    Personnage();
    Personnage(std::string nomArme,int degatArme);
    ~Personnage();
    void recevoirDegat(int nbDegat);
    void attaquer(Personnage &cible)const;
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatNouvelleArme);
    bool estVivant()const;
    void afficherEtat()const;
    
    
    private:

    int m_vie;
    int m_mana;
    Arme m_Arme;
};


#endif//