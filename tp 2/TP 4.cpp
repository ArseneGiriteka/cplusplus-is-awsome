#include<iostream>

using namespace std;

int main()
{
	int const tailleDuTableau = 5;
	double moyenneDesScores(int score[],int);
	int score[tailleDuTableau];
	score[0]=13;
	score[1]=12;
	score[2]=15;
	score[3]=15;
	score[4]=15;
	cout<<"la moyenne des scores est "<<moyenneDesScores(score,tailleDuTableau)<<endl;
	return 0;
}

double moyenneDesScores(int score[],int tailleDuTableau)
{
	int i;
	double moyenne,somme;
	for(i=0;i<tailleDuTableau;i++)
	{
		somme+=score[i];
	}
	moyenne=somme/tailleDuTableau;
	return moyenne;
}
