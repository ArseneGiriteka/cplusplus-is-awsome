#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include<string>
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
        ifstream dico("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/reception/agent 4/programme9_TP_motMysteredico.txt");
        unsigned int tailleDico;
        int nbRandom(0);

        dico.seekg(0, ios::end);
        tailleDico = dico.tellg();

        nbRandom = rand() % tailleDico;
        dico.seekg(nbRandom, ios::beg);
        getline(dico, motInitial);
        //cout << motInitial << endl;
                                    //effacer le mot saisi par le J1

        //Etape 2) Mélange

        string motMystere = melangeLettres(motInitial);  //on stocke la valeur retournée par la fonction melangeLettres dans motMystere

        //Etape 3) Demande au J2 quel est le mot

        while((motSaisi != motInitial) & (nbEssai < essaiAutorise))     //tant que le mot saisi par J2 n'est pas égale au motInitial du J1 alors
        {


            if (motSaisi != motInitial && nbEssai < essaiAutorise)
            {
                cout << "Quel est ce mot (Ecrire en majuscule): " << motMystere << endl;
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
