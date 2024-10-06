#include"personnage.h"

using namespace std;

Personnage::Personnage():m_vie(100),m_mana(100){
    delete m_Arme;
}

Personnage::Personnage(string nomArme,int degatArme):m_vie(100),m_mana(100),m_Arme(0){
    m_Arme = new Arme(nomArme,degatArme);
}

Personnage::Personnage(Personnage const& persoToCopy):m_vie(persoToCopy.m_vie),m_mana(persoToCopy.m_mana),m_Arme(0){
    m_Arme = new Arme(*(persoToCopy.m_Arme));
}

Personnage::~Personnage(){

}

void Personnage::attaquer(Personnage &cible)const{
    cible.recevoirDegat(m_Arme->getDegats());
}

void Personnage::recevoirDegat(int nbDegats){
    m_vie -= nbDegats;
    if(m_vie<0){
        m_vie=0;
    }
}

void Personnage::boirePotionDeVie(int quantitePotion){
    m_vie += quantitePotion;
    if(m_vie>100){
        m_vie=100;
    }
}

void Personnage::changerArme(string nomNouvelleArme,int degatNouvelleArme){
    m_Arme->changer(nomNouvelleArme,degatNouvelleArme);
}

bool Personnage::estVivant()const{
    return (m_vie > 0);
}

void Personnage::afficherEtat()const{
    cout<<"---------------------"<<endl<<"vie = "<<m_vie<<endl<<"mana = "<<m_mana<< endl;
     m_Arme->afficher();cout<<endl<<"----------------------------"<<endl;
}

Personnage& Personnage::operator=(Personnage const& perso){
    if(this != &perso){
        m_vie = perso.m_vie;
        m_mana = perso.m_mana;
        m_Arme = new Arme(*(perso.m_Arme));
    }
    return *this;
}