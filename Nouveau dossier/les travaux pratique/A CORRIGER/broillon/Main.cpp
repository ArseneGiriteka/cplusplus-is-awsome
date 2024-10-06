#include <string>
#include <iostream>
#include <fstream>
#include <random>


using namespace std;
bool caseInsensitiveStringCompare(const std::string& str1, const std::string& str2);

bool caseInsensitiveStringCompare(const string& str1, const string& str2)
{
	if (str1.size() != str2.size())
	{
		return false;
	}

	for (string::const_iterator c1 = str1.begin(), c2 = str2.begin(); c1 != str1.end(); ++c1, ++c2)
	{
		if (tolower(*c1) != tolower(*c2))
		{
			return false;
		}
	}
	return true;
}


int main()
{
	
	random_device randomSeed; //g�n�ration d'un device
	default_random_engine randomNumber(randomSeed()); //on g�n�re un nombre al�atoire � partir du device
	uniform_int_distribution<int> randomPlage(0, 323576); //on utilise le nombre al�atoire pour g�n�rer des nombres de fa�on uniforme entre deux bornes : 0 = ligne 1 du dico et 323576 = la derni�re

	string mot;
	string motBackup;
	string *motMelange(0);
	string motChoisi;
	string choix;
	int nbEtapes;
	int const nbEtapesConst(5);
	int tailleMot;
	int numeroLigne(randomPlage(randomNumber)); //on g�n�re le num�ro de la ligne entre 0 et 323576
	int numeroCharactere;
	ifstream dico("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/reception/agent 2/dico/dico.txt");

	if (dico)
	{
		do
		{
			motMelange = new string;
			for (size_t i = 0; i < numeroLigne; i++)
			{
				dico.ignore(80, '\n'); //on saute 80 caract�res ou la fin de la ligne (le mot fait forcement moins de 80 caract�res)
			}
			getline(dico, mot);
			motBackup = mot;

			tailleMot = mot.size();

			for (size_t i = 0; i < tailleMot; i++)
			{
				uniform_int_distribution<int> randomPlage(0, tailleMot - i - 1); //on enl�ve 1 pour ne pas tirer au sort l'espace de fin de string
				numeroCharactere = randomPlage(randomNumber); //on tire au sort un num�ro de caract�re
				*motMelange += mot[numeroCharactere]; //on ajoute ce carat�re au mot m�lang�
				mot.erase(numeroCharactere, 1); //on efface ce caract�re du mot
			}

			
			if (tailleMot < nbEtapesConst)
			{
				nbEtapes = tailleMot;
			}
			else
			{
				nbEtapes = nbEtapesConst;
			}

			for (size_t i = 0; i < nbEtapes; i++)
			{
				cout << "Veuillez remettre dans l'ordre le mot : " << *motMelange << endl;
				cout << "Indice le mot commence par : ";
				for (size_t j = 0; j < i + 1; j++)
				{
					cout << motBackup[j];
				}
				cout << endl;
				cin >> motChoisi;
				if (caseInsensitiveStringCompare(motBackup, motChoisi))
				{
					cout << endl << "Bien jouer vous avez trouve le mot mystere !!";
					break;
				}
				if (i == 4)
				{
					cout << endl << "Dommage vous n'avez pas trouve le mot mystere qui etait : " << motBackup;
				}
				cout << endl;
			}

			cout << endl << endl << "Voulez-vous rejouer ? O/N" << endl;
			cin >> choix;
			while (!(caseInsensitiveStringCompare(choix, "o") || caseInsensitiveStringCompare(choix, "n")))
			{
				cout << endl << "Voulez-vous rejouer ? Les reponses possibles sont : \"o\" ou \"O\" pour oui et \"n\" et \"N\" pour non"  << endl;
				cin >> choix;
			}

			delete motMelange;
			motMelange = 0;

		} while (caseInsensitiveStringCompare(choix, "o"));
	}
	return 0;
}
