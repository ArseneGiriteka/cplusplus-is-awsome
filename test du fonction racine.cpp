#include<iostream>
#include<cmath>
using namespace std;

int square_root(int square)
{
	int nbr;
	nbr=sqrt(square);
	return nbr;
}


int main()
{
	int sqr(0),resultat(0);
	cout<<"entre le carre du nombre est on vous affiche le nombre en quetion"<<endl;
	cout<<"square= ";cin>>sqr;
	resultat=square_root(sqr);
	cout<<"la racine carre de "<<sqr<<" est "<<resultat;
	
	return 0;
}
