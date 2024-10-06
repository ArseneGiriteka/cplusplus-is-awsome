#ifndef ARME_H_DEF
#define ARME_H_DEF

#include<iostream>
#include<string>

class Arme{
public:

Arme();
Arme(std::string nom,int degats);
~Arme();
void changer(std::string nom,int degats);
void afficher()const;
int getDegats()const;

private:

std::string m_nom;
int m_degats;
};

#endif