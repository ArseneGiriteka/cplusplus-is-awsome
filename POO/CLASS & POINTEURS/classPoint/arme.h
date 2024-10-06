#ifndef ARME_DEF
#define ARME_DEF

#include <iostream>

class Arme
{
	public:
	Arme();
	Arme(std::string nom,int degats);
	~Arme();
	void changer(std::string nom,int degats);
	void afficher() const;
	int getDegats() const;
		
	private:
	std::string m_nom;
	int m_degats;	
};


#endif
