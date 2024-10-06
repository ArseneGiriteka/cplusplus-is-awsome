#include"Attributs.h"

using namespace std;

int MaClasse::compteur = 0;

MaClasse::MaClasse()
{
	++compteur;
}

MaClasse::~MaClasse()
{
	--compteur;
}

void MaClasse::maMethode()
{
	cout<<"bonjours !"<<endl;
}

int MaClasse::nbrInstances()
{
	return compteur;
}


