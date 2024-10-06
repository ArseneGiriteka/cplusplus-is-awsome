#include<iostream>

using namespace std;

int ajouteDeux(int& a)
{
	a=a+2;
	return a;
}

int main()
{
	int nombre,resultat;
	
	cout<<"nombre = ";cin>>nombre;
    resultat=ajouteDeux(nombre);
	cout<<"avant nombre = "<<nombre<<endl;
	
	cout<<"apres nombre = "<<resultat;
	
	return 0;
}
