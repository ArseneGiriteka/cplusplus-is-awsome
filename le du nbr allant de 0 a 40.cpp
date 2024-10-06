#include<iostream>
using namespace std;

double carre(int x)
{
	return x*x;
}
double square_root(int carre(rc_carre*rc_carre))
{
	return rc_carre;
}

int main()
{
	int nbr(0);
	double resultat;
	double root(0);
	do{
		resultat=carre(nbr);
		root=square_root(nbr);
		cout<<"le carre de "<<nbr<<" est "<<resultat<<"et la racine carre est"<<root<<endl;
		nbr++;
	}while(nbr<41);
	
	
	return 0;
}
