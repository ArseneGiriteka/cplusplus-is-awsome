#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
#include<string>
using namespace std;

string melange(string ch)
{

    string motMelange;
    int pos;
	srand(time(0));
    while(ch.size())
    {
        pos = rand() % ch.size();
        motMelange  += ch[pos];
        ch.erase(pos,1);
    }

    return motMelange;
}

string piocherDictionnaire()
{
	string mot;
	int position;
	vector<string>listeMots;
   ifstream flux("D:/open_classroom c++/Nouveau dossier/les travaux pratique/A CORRIGER/MES CORRECTIONS/AGENT 1/dici.txt");
   while(flux>>mot)
   {
   	  listeMots.push_back(mot);
   }
   srand(time(0));
   position=rand()%listeMots.size();
   
   return listeMots[position];
 
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
        coup=6;
        cout<<"Saisissez le mode de jeu: 1=un joueur/2=deux joueurs ";
        cin>>mode;
        if (mode==2)
        {
            cout<<"Joueur 1: Saisissez le mot mystere: ";

            cin>>motMystere;

            system("cls");

        }

        else if(mode==1)
        {
          
           motMystere=piocherDictionnaire();
        }

        motMelange = melange(motMystere);

        do
        {
            coup--;
            cout<<"il vous reste "<<coup<<endl;
            cout<<"Devinez quel est ce mot "<< motMelange <<" ?"<<endl;
            cin >>motJoueur;

        }
        while(motJoueur!=motMystere&&coup>0);

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
