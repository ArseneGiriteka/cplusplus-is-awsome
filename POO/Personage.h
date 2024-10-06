#ifndef DEF_PERSONAGE
#define DEF_PERSONAGE
#include"Arme.h"
#include"Baguette.h"

class Personage
{
	public:
		
		Personage();
		Personage(std::string nomJoueur);
		Personage(std::string nomJoueur,std::string nomArme,int degatsArme);
		Personage(std::string nomJoueur,std::string nomArme,int degatsArme,std::string nomBaguette,int degatsBaguette);
		personage(int vie,int mana,std::string nomArme,int degatsArme);
		~Personage();
	void recevoirDegats(int nbDegats);
	void attaquer(Personage&cible);
	void boirePotionDeVie(int quantiteDePotion);
	void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
	void estVivant() const;
	void afficherEtat()const;

	
	protected:
		
	int m_vie;
	int m_mana;
	Arme m_arme;	
	std::string m_nom;	   
};

#endif
