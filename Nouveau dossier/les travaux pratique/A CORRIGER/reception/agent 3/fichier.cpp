//*** gestion du fichier dictionnaire

#include "fichier.h"

void lectureFichier(string const& nomFichier)
{
    // ouverture en lecture
    ifstream monFlux(nomFichier.c_str());
    // lecture du fichier en entier

    if (monFlux)
    {
        string ligne;
        while (getline(monFlux, ligne)) cout << ligne << endl;
    }

    else
        cout << "ERREUR1: Impossible d'ouvrir le fichier en lecture" << endl;
}

// *************************************************************************************
int nbMotsFichier(string const& nomFichier)
{
    // on ouvre le fichier en lecture
    ifstream monFlux(nomFichier.c_str());

    if (monFlux)
    {
        string ligne;
        int nbMots(0);
        while (getline(monFlux, ligne)) nbMots++;

        return nbMots;
    }
    else
    {
        cout << "ERREUR2: Impossible d'ouvrir le fichier en lecture" << endl;
        return 0;
    }
}
// *************************************************************************************

string motDictionnaire(string const& nomFichier, int nbMots)
{
    // on ouvre le fichier en lecture
    ifstream monFlux(nomFichier.c_str());

    // au début
   // monFlux.seekg(0, ios::beg); // pas obligatoire ici 

     // choix d'un mot au hasard
    int numMot = rand() % nbMots + 1;

    string nom = "";
    for (int i = 0; i < numMot; i++) getline(monFlux, nom);

    return nom;
}
