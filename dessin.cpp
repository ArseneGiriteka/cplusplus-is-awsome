#include<iostream>

using namespace std;
void afficheMesageErreur(int a,int b)
{
	if((a<0)||(b<0))
	cout<<"eurreur!"<<endl;
}
void dessine_rect(int longueur,int hauteur,char symbole,char symbole2)
{
	for(int ligne=0;ligne<hauteur;ligne++)
	{
		for(int colone=0;colone<longueur;colone++)
		{
			cout<<symbole<<symbole2;
		}
		cout<<endl;
	}
}

int main()
{
	int longueur,hauteur;
	char symbole,symbole1;
	cout<<"longueur = ";cin>>longueur;
	cout<<"hauteur = ";cin>>hauteur;
	cout<<"le symbole a utiliser est ";cin>>symbole;
	cout<<"l autre symbole a utiliser est :";cin>>symbole1;
	
	afficheMesageErreur(longueur,hauteur);
	dessine_rect(longueur,hauteur,symbole,symbole1);
	
	return 0;
}
