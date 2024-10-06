#include "personnage.h"

using namespace std;

Personnage::Personnage(): m_arme(0),m_vie(100),m_mana(100)
{
	m_arme = new Arme();
}

Personnage::Personnage(string nomArme,int degatArme):m_arme(0),m_vie(100),m_mana(100)
{
	m_arme = new Arme(nomArme,degatArme);
}

Personnage::Personnage(Personnage const& personnageAcopier):m_vie(personnageAcopier.m_vie),m_mana(personnageAcopier.m_mana),m_arme(0)
{
	m_arme = new Arme(*(personnageAcopier.m_arme));
}

Personnage& Personnage::operator=(Personnage const& personnageAcopie)
{
	if(this != &personnageAcopie)
	{
		m_vie=personnageAcopie.m_vie;
		m_mana=personnageAcopie.m_mana;
		delete m_arme;
		m_arme = new Arme(*(personnageAcopie.m_arme));
	}
	return *this;
}
Personnage::~Personnage()
{
	delete m_arme;
}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie-=nbDegats;
	
	if(m_vie<0)
		{
			m_vie=0;
		}
		
}

void Personnage::attaquer(Personnage &cible)
{
	cible.recevoirDegats(m_arme->getDegats());
}

void Personnage::boirePotionDeVie(int quantiteDePotion)
{
	m_vie += quantiteDePotion;
	
	if(m_vie>100)
	{
		m_vie = 100;
	}
}

void Personnage::changerArme(string nomNouvelleArme,int degatsNouvelleArme)
{
	m_arme->changer(nomNouvelleArme,degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
   return (m_vie>0);
}

void Personnage::afficherEtat()const
{
	cout<<"vie = "<<m_vie<<endl;
	cout<<"Mana = "<<m_mana<<endl;
	m_arme->afficher();
	estVivant();
}

