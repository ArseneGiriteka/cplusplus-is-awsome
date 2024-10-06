#include"Personage.h"

using namespace std;

Personage::Personage():m_vie(100),m_mana(100),m_nom("joueur")
{

}

Personage::Personage(string nomJoueur):m_vie(100),m_mana(100),m_nom(nomJoueur)
{
	
}

Personage::Personage(string nomJoueur,string nomArme,int degatsArme):m_vie(100),m_mana(100),m_nom(nomJoueur),m_arme(nomArme,degatsArme)
{
	
}

Personage::Personage(string nomJoueur,string nomArme,int degatsArme,string nomBaguette,int degatsBaguette):m_nom(nomJoueur),m_vie(100),m_mana(100),m_arme(nomArme,degatsArme),m_baguette(nomBaguette,degatsBaguette)
{

}

Personage::~Personage()
{
	
}

void Personage::recevoirDegats(int nbDegats)
{
	m_vie-=nbDegats;
	
	if(m_vie<0)
		{
			m_vie=0;
		}
		
}

void Personage::attaquer(Personage &cible)
{
	cout<<m_nom<<" attaque "<<cible.m_nom<<endl;
	cout<<cible.m_nom<<" est frappe et sa vie dumini de "<<m_arme.getDegats()<<endl;
	cible.recevoirDegats(m_arme.getDegats());
}

void Personage::boirePotionDeVie(int quantiteDePotion)
{
	cout<<m_nom<<" boit une potion de "<<quantiteDePotion<<endl;
	m_vie += quantiteDePotion;
	
	if(m_vie>100)
	{
		m_vie = 100;
	}
}

void Personage::changerArme(string nomNouvelleArme,int degatsNouvelleArme)
{
	cout<<m_nom<<" recoit une nouvelle arme appellee :"<<nomNouvelleArme<<" ainsi capable d'infliger des degats de "<<degatsNouvelleArme<<endl;
	m_arme.changer(nomNouvelleArme,degatsNouvelleArme);
}

void Personage::estVivant() const
{
	if(m_vie>0)
	{
		cout<<m_nom<<" est encore en vie"<<endl;
	}
	else
	{
		cout<<m_nom<<" est deja mort"<<endl;
	}
}

void Personage::afficherEtat()const
{
	cout<<"Nom :"<<m_nom<<endl;
	cout<<"vie = "<<m_vie<<endl;
	cout<<"Mana = "<<m_mana<<endl;
	m_arme.afficher();
	m_baguette.afficher();
	estVivant();
}

void Personage::attaquerBaguette(Personage &cible)
{
	if(m_mana>0)
	{
		cout<<m_nom<<" a tire desus une sortile "<<cible.m_nom<<" qui va perdre la et la mana de "<<m_baguette.getDegats()<<endl;
	cible.recevoirDegats(m_baguette.getDegats());
	m_mana-=m_baguette.getDegats();
   }
  else 
  {
  	cout<<m_nom<<" n'a pas reussi a lancer la sortilege a "<<cible.m_nom<<endl;
  }
}

void Personage::changerBaguette(string nomNouvelleBaguette,int degatsNouvelleBaguette)
{
	m_baguette.changer(nomNouvelleBaguette,degatsNouvelleBaguette);
}

