#ifndef PERSONNAGE_DEF
#define PERSONNAGE_DEF

#include <iostream>
#include"arme.h"

class Personnage
{
	public:
	Personnage();
	Personnage(std::string nomArme,int degatArme);
	Personnage(Personnage const& personnageAcopier);
	Personnage& operator=(Personnage const& personnageAcopie);
	~Personnage();
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage&cible);
	void boirePotionDeVie(int quantiteDePotion);
	void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
	bool estVivant() const;
	void afficherEtat()const;	
		
	private:
	int m_vie;
	int m_mana;
	Arme* m_arme;
		
};


#endif
