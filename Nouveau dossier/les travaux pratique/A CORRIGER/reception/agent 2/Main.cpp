#include <string>
#include <iostream>
#include <fstream>
#include <random>
#include "Header.h"

using namespace std;

int main()
{
	
	random_device randomSeed; //génération d'un device
	default_random_engine randomNumber(randomSeed()); //on génère un nombre aléatoire à partir du device
	uniform_int_distribution<int> randomPlage(0, 323576); //on utilise le nombre aléatoire pour générer des nombres de façon uniforme entre deux bornes : 0 = ligne 1 du dico et 323576 = la dernière

	string mot;
	string motBackup;
	string *motMelange(0);
	string motChoisi;
	string choix;
	int nbEtapes;
	int const nbEtapesConst(5);
	int tailleMot;
	int numeroLigne(randomPlage(randomNumber)); //on génére le numéro de la ligne entre 0 et 323576
	int numeroCharactere;
	ifstream dico("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/reception/agent 2/dico/dico.txt");

	if (dico)
	{
		do
		{
			motMelange = new string;
			for (size_t i = 0; i < numeroLigne; i++)
			{
				dico.ignore(80, '\n'); //on saute 80 caractères ou la fin de la ligne (le mot fait forcement moins de 80 caractères)
			}
			getline(dico, mot);
			motBackup = mot;

			tailleMot = mot.size();

			for (size_t i = 0; i < tailleMot; i++)
			{
				uniform_int_distribution<int> randomPlage(0, tailleMot - i - 1); //on enlève 1 pour ne pas tirer au sort l'espace de fin de string
				numeroCharactere = randomPlage(randomNumber); //on tire au sort un numéro de caractère
				*motMelange += mot[numeroCharactere]; //on ajoute ce caratère au mot mélangé
				mot.erase(numeroCharactere, 1); //on efface ce caractère du mot
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
