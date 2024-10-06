#ifndef DEF_SORTILEGE
#define DEF_SORTILEGE

#include<iostream>
#include<string>

class Baguette
{
	public:
	Baguette();
	Baguette(std::string nomBaguette,int degatsBaguette);
	~Baguette();
	void changer(std::string nomNouvelleBaguette,int degatsNouvelleBaguette);
	void afficher()const;
	int getDegats()const;
	
	private:
		
		std::string m_nom;
		int m_degats;
	
};

#endif
