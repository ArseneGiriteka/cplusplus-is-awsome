#include<iostream>

using namespace std;

int main()
{
	int const nombreMeilleurScore = 5;
	
	int meilleurScore[nombreMeilleurScore];
	
	meilleurScore[0]=118218;
	meilleurScore[1]=100432;
	meilleurScore[2]=87347;
	meilleurScore[3]=64523;
	meilleurScore[4]=31415;
	int i;
	int sommesDesNotes,moyenneDesNotes;
	for(i=0;i<nombreMeilleurScore;i++)
	{
	sommesDesNotes+=meilleurScore[i];
	cout<<meilleurScore[i]<<endl;
    }
    moyenneDesNotes=sommesDesNotes/nombreMeilleurScore;
    cout<<"la sommes des meilleurs scores est "<<sommesDesNotes<<endl<<"la moyenne des meilleurs est de "<<moyenneDesNotes<<endl;
	return 0;
}

