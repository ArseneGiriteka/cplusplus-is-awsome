#include"arme.h"

using namespace std;

Arme::Arme():m_nom("samurai"),m_degats(10){

}

Arme::Arme(string nom,int degats):m_nom(nom),m_degats(degats){

}

Arme::~Arme(){

}

void Arme::changer(string nom,int degats){
    m_nom=nom;
    m_degats=degats;
}

void Arme::afficher()const{
    cout<<"Arme : "<<m_nom<<" ("<<m_degats<<" degat)";
}

int Arme::getDegats()const{
    return m_degats;
}