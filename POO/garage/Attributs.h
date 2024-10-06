#ifndef DEF_ATTRIBUTS
#define DEF_ATTRIBUTS

#include <iostream>

class MaClasse
{
	public:
	MaClasse();
	~MaClasse();
	static void maMethode();
	static int nbrInstances();
	private:
	static int compteur;
	
};

#endif
