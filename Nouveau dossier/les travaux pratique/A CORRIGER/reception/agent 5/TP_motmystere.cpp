#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;
int main()
{
	int const maxEssais(5);
	ifstream monDictionnaire("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/reception/agent 5/dico.txt");

	if (!monDictionnaire) {
		cout << "Probleme d'ouverture du fichier" << endl;
		return(-1);
	}

	string motMystere, motMelange, reponse;
	int wantToContinue(0), tries, score(0), maxScore(0), lignesDictionnaire(0);
	
	// Compter le nombre de lignes du dictionnaire
	string ligne;
	while (getline(monDictionnaire, ligne)) {
		lignesDictionnaire++;
	}

	// Methode alatoire de selection des lignes
	random_device rseed;
	mt19937 rgen(rseed()); // mersenne_twister
	uniform_int_distribution<int> idist(0, lignesDictionnaire); // [0,lignesDictionnaire]


	// Debut du programme
	do
	{
		// Definition du mot aléatoire en utilisant getline
		monDictionnaire.clear();
		monDictionnaire.seekg(0,ios::beg);
		int randomLine(idist(rgen));
		for (int i = 0; i < randomLine; i++) {
			getline(monDictionnaire, motMystere);
		}

		// Melanger le mot
		motMelange = motMystere;
		random_shuffle(motMelange.begin(), motMelange.end());
		
		tries = 0;
		// On demande quel est le mot mystere
		do {

			cout << "Quel est ce mot? " << motMelange << endl;
			getline(cin, reponse);
			// Les mots sont en majuscule, on veut une reponse qui soit case insensible
			for (unsigned int i = 0; i < reponse.length(); i++) {
				reponse[i] = toupper(reponse[i]);
			}

			// Verification de la reponse et du nombre d'essais
			if (motMystere.compare(reponse) == 0) {
				cout << "Bravo!" << endl;
				score++;
				maxScore++;
			}
			else {
				cout << "Ce n'est pas le mot!" << endl << endl << "Il vous reste " << maxEssais - tries - 1 << " essais" << endl;
				tries++;
				if (tries == maxEssais) {
					cout << endl << "Vous avez perdu" << endl;
					cout << "La reponse est " << motMystere << endl;
					maxScore++;
				}
			}
		} while ((motMystere.compare(reponse) != 0) && (tries < maxEssais));

		// Demande a l'utilisateur s'il veut continuer
		cout << endl << "Voulez vous continuer?" << endl << "0 - Non" << endl << "1 - Oui" << endl;
		cout << "Enter to continue... " << endl;
		cin >> wantToContinue;
		cin.ignore(); // necessaire du au getline au debut du boucle while
	} while (wantToContinue == 1);
	cout << "Ton score est de " << score << " sur " << maxScore << endl;

	return(0);
}
