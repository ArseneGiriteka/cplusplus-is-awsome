#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<fstream>
using namespace std;


string melangeLettres(string mot)//f(X) qui recoit une chaine de char et renvoie la meme chaine melange;
{
	int position(0),i;
	string motDeforme;
	srand(time(0));//definition d un f(x) aleatoire;
	while(mot.size()!=0)//tant que la chaine aura des characteres
	{
		position=rand() % mot.size();
		motDeforme+=mot[position];
		mot.erase(position,1);
	}
	return motDeforme;
}

void sautsDeLignes()
{
	int i(0);
do
{
	cout<<endl;
	i++;
}while(i<30);
	
}
int moyennePoints(std::vector<int>Score,int tailleScore)
{
	int sommePoint(0);
	for(int i(0);i<tailleScore;i++)
	{
		sommePoint+=Score[i];
	}
	
	return sommePoint;
}

string piocherDictionnaire()
{
	vector<string>listeMembres;
	ifstream fichier(<!DOCTYPE html PUBLIC �-//W3C//DTD XHTML 1.0 Strict//EN�
	�http ://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd�> 
<!-- D�claration du debut d�un document HTML avec la langue:--> 
<html xml :lang=�en� lang=�en� xmlns=�http ://www.w3.org/1999/xhtml�> 
<head> <!-- d�but de l �en-t�te HTML --> 
	<!-- D�claration du type d�encodage --> 
	<meta http-equiv=�Content-Type� content=�text/html ;charset=utf-8�/> 
	<!-- Titre de la page dans la fen�tre ou l � onglet du navigateur --> 
	 <title>My first XHTML 1.0 Strict document</title> 
	</head> 
	<body> 
	  <p>Hello world!</p> 
	   </body> 
	   </html>);
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
	string motSaisi;
	string motRepondu;
	string melange;//est declare pour evite le change du motmelange lors de l execution;
	char lettreRepondu;
	int i(0);
	int const maxCoups = 5;
	int nbChances,tailleScore(0);
	vector<int>Score;
	do 
	  {
 			motSaisi=piocherDictionnaire();
			melange=melangeLettres(motSaisi);
		for(i=0;i<maxCoups;i++)
			{
				nbChances=maxCoups-i;
			 	cout<<"quel est ce mot "<<melange<<"?"<<endl;
				cin>>motRepondu;
				if(motSaisi==motRepondu) 
				{
					cout<<"tu l as ue!"<<endl;
		    
		    Score.push_back(nbChances);
		    break;
				}
	
			else {
					 cout<<"tu l as rate!"<<endl;
					 cout<<"il vous reste "<<(nbChances-1)<<"chances"<<endl;
					 
	            }
	       
			}
			if((nbChances-1)>0)
			{
				cout<<"voulez vous jouer une autre partie?(o/n)"<<endl;
				cin>>lettreRepondu;
			}
			else
			{
				cout<<endl<<"le mot etait "<<motSaisi<<endl;
				break;
			}
			
		}while((lettreRepondu!='n'));
		
		tailleScore=Score.size();
	cout<<"vous avez reussi avec le score de "<<moyennePoints(Score,Score.size())<<endl;
	
	return 0;
}
