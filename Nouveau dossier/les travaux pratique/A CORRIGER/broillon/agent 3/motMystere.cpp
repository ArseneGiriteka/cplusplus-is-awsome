// ******************************************************************************
// * motMystere : lit un mot au hasard dans un fichier texte, melange les lettres
// de ce mot, et le joueur doit retrouver ce mot en 5 essais
// le fichier : dictionnaire.txt doit se trouver dans le repertoire c:/data
// ******************************************************************************

#include<iostream>
#include <ctime>
#include <cstdlib>

#include "fonctions.h"
#include "fichier.h"

#include <stdlib.h>

//using namespace std;

const int NB_ESSAI = 5;

int main()
{
    string motMystere, motMelange, motUtilisateur;
    string const nomFichier("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/broillon/agent 3/dictionnaire.txt");

    char reponse;

    //Initialisation des nombres aléatoires
    srand(time(0));
    // determine le nb de mots contenue dans le dictionnaire
    int nbMots = nbMotsFichier(nomFichier);
    //cout << "le dictionnaire a " << nbMots << endl;

    if (nbMots)
    {
        do
         {
          system("cls");                   // efface l'ecran

          // retourne un mot du dictionnaire
          motMystere = motDictionnaire(nomFichier, nbMots);

          //2 : On récupère le mot avec les lettres mélangées dans motMelange
          motMelange = melangerLettres(motMystere);

          int nbessais(0);

         //3 : On demande à l'utilisateur quel est le mot mystère
         cout << "*** Quel est ce mot ? " << motMelange << " ***" << endl;
         do
           {
            // cout <<  "Quel est ce mot ? " << motMelange << endl;
            cout << "* essai  " << ++nbessais << " : ";
            cin >> motUtilisateur;
            //nbessais++;

            if (motUtilisateur == motMystere) cout << "Bravo ! " << "trouve en " << nbessais << " essais" << endl;
            else
                cout << "Ce n'est pas le mot !" << endl;


           } while (motUtilisateur != motMystere && nbessais < NB_ESSAI);
           //On recommence tant qu'il n'a pas trouvé

           // affiche solution si erreur
          if (motUtilisateur != motMystere) cout << "*** le mot etait : " << motMystere << " ***" << endl;
          cout << "voulez vous recommencer ? (O/N) ";
          cin >> reponse;

        } while (toupper(reponse) == 'O');   // transforme reponse en majuscule


    }
    else cout << "le fichier dictionnaire est vide ou inexistant";

    //system("PAUSE");
  
    return 0;
}
