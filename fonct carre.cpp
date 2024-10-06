#include<iostream>

using namespace std;

double calcul_caree(double nbr)
{
	return nbr*nbr;
}

int main()
{
	double x(0),resultat;
	cout<<"x= ";cin>>x;
	resultat=calcul_caree(x);
	cout<<"le carre de "<<x<<" est "<<resultat;
	return 0;
}
