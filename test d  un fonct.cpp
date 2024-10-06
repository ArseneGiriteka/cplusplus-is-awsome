#include<iostream>

using namespace std;

int ajouteDeux(int a)
{
	a+=2;
	return a;
}

int main()
{
	int nombre(0),resultat(0);
	cout<<"le nombre est ";cin>>nombre;
	resultat=ajouteDeux(nombre);
	cout<<"le nombre de depart est "<<nombre<<endl;
	cout<<"le nombre obtenu est "<<resultat<<endl;
	system("pause");
	return 0;
}
