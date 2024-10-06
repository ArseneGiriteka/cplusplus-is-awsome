#include<iostream>
#include<fstream>
#include<string>
/*
ce programme ouvre le fichier existant sinom il le cree de sa propre maniere;
*/
using namespace std;

int main()
{
	int position;
	string nomFichier("D:/fichier/kinamusic.txt");//cette ligne copie le path dans la chaine de char nomFichier;
	ofstream monFlux(nomFichier.c_str(),ios::app);//ofstream est une fonction d ouverture et ios::app signifie qu on ajoute au contenu initial du fichier ouvert
	if(monFlux)
	{
		string nomUtilisateur;
		int age;
		cout<<"quel votre nom? ";cin>>nomUtilisateur;
		cout<<"votre age? ";cin>>age;
		monFlux<<"je m appelle "<<nomUtilisateur<<endl;
		monFlux<<"j' "<<age<<"ans"<<endl<<endl;
	}
	else
	{
		cout<<"eurreur s est protuit !";
	}
	position=nomFichier.tellp();
	cout<<"la position = "<<position<<endl;
	return 0;
}




