#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream fichier("D:/fichier/kinamusic.txt");
	fichier.seekg(4,ios::end);
	int taille;
	taille = fichier.tellg();
	cout<<"nous somme a la "<<taille<<"eme position"<<endl;
	
	return 0;
}


