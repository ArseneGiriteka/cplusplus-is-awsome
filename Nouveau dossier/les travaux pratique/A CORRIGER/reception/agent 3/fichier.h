#pragma once
#ifndef _fichier_h
#define _fichier_h

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void lectureFichier(string const& fic);
int  nbMotsFichier(string const& fic);    // retourne le nb de mots

string motDictionnaire(string const& fic, int nbMots);

#endif // !_fichie