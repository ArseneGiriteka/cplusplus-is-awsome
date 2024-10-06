#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include<string>
#include<vector>
using namespace std;

string melangeLettres(string motInitial)
{
     //Etape 2) Mélange des lettres du mot
    int position = 0;
    int i;
    int tailleMot = motInitial.size();
    string motMystere;
        for(i = 0; i < tailleMot; i++)      //on teste quand on a analysé toute les lettres
        {
            position = rand() % motInitial.size(); //on stocke dans position un nb au hasard compris entre 0 et le nombre de caractere restant dans le mot
            motMystere += motInitial[position] ;   //on ajoute a mot mystere le caractere de mot choisi grâce au nb random
            motInitial.erase(position,1);          //on enleve le caractère sélcétionné afin de ne pas le repiocher deux fois
        }
    return motMystere;                      //on retourne le mot mystère
}


string piocherDictionnaire()
{
	vector<string>listeMembres;
	ifstream fichier("D:/fichier/dictionnare.txt");
	if(fichier)
	{
		string mot;
		int nbAleatoire;
		
		while(fichier>>mot)
		{
			listeMembres.push_back(mot); 	
		}
		srand(time(0));
		nbAleatoire = rand() % listeMembres.size();
		return listeMembres[nbAleatoire];
		
	}
	else
	{
		return "eurreur d ouverture du fichier";
	}
}



int main()
{
    string reponseUser;

    do
    {
        srand(time(0));

        //Etape 1) Saisi du mot par le J1

        string motInitial;
        string motSaisi;
        int nbEssai(0);
        int const essaiAutorise(5);
        unsigned int tailleDico;
        int nbRandom(0);
         motInitial=piocherDictionnaire();
         motSaisi=melangeLettres(motInitial);
         

        //Etape 3) Demande au J2 quel est le mot

        while((motSaisi != motInitial) && (nbEssai < essaiAutorise))     //tant que le mot saisi par J2 n'est pas égale au motInitial du J1 alors
        {


            if (motSaisi != motInitial && nbEssai < essaiAutorise)
            {
                cout << "Quel est ce mot (Ecrire en majuscule): " << motSaisi << endl;
                cin >> motSaisi;  //stock mot saisi par le joueur
                nbEssai++; //incrémente de 1 nbEssai
                cout << "Retentez ! Il vous reste " << essaiAutorise - nbEssai << " essais !" << endl;
            }
        }
        if(motSaisi != motInitial) //test si le mot saisi ne correspond pas
        {
            cout << "Perdu ! La reponse etait " << motInitial << endl;
        }
        else
        {
            cout << "Felicitations, vous avez trouve !" << endl;
        }
        cout << "Souhaitez-vous refaire une partie (oui/non) ?" << endl;
        cin >> reponseUser;

    } while(reponseUser == "oui");

    return 0;
}
