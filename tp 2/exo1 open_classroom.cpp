#include<iostream>

using namespace std;

int nombreDesecondes(int heures=0,int munites=0,int secondes=0);

int main()
{
	cout<<nombreDesecondes(0,0,0);
	
	return 0;
}

int nombreDesecondes(int heures,int munites,int secondes)
{
	int total = 0;
	total = heures*60*60;
	total += munites*60;
	total += secondes;
	return total;
}
