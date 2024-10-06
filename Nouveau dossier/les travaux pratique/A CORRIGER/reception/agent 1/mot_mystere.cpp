#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;

string melange(string ch)
{

    string motMelange;
    int pos(0);

    while(ch.size()!=0)
    {
        pos=rand() % ch.size();
        motMelange+=ch[pos];
        ch.erase(pos,1);
    }

    return motMelange;
}

double moyScore(const vector<int> &tab)
{
    double moyenne(0);
    for(int i=0;i<tab.size();i++)
    {
        moyenne+=tab[i];
    }
    return (moyenne/tab.size());
}

//****************************************************

int main(){

    srand(time(0));

    int coup,mode,continuer;
    string motMystere,motMelange,motJoueur("");
    vector<int> score;
    double moyenne;

     cout<<"******Bienvenue******"<<endl;
    do
    {
        coup=0;
        cout<<"Saisissez le mode de jeu: 1=un joueur/2=deux joueurs ";
        cin>>mode;
        if (mode==2)
        {
            cout<<"Joueur 1: Saisissez le mot mystere: ";

            cin>>motMystere;

            system("cls");

        }

        if(mode==1)
        {
            ifstream flux("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/reception/agent 1/dici.txt");

            getline(flux,motMystere);

        }

        motMelange = melange(motMystere);

        do
        {
            coup++;
            cout<<"Devinez quel est ce mot "<< motMelange <<" ?"<<endl;
            cin >>motJoueur;

        }
        while(motJoueur!=motMystere);

        cout<<"Bravo !"<<endl;
        cout<<"Votre score est: "<<coup<<endl;
        score.push_back(coup);

        cout<<"Voulez vous rejouer? 1=oui/0=non ";
        cin>>continuer;
        system("cls");
    }
    while(continuer==1);

    cout<<"Votre moyenne est: "<<moyScore(score)<<endl;
    cout<<".. Au revoir !";
}
