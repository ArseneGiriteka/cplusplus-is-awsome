#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
	ifstream fichier("D:/fichier/dictionnare.txt");
	int i;
	if(fichier)
	{
		string mot;
		while (getline(fichier,mot))
		
		for(i=0;i<1;i++)
		{
			cout<<mot;
		}
		
	}
		else
		cout<<"eurreur!";
	 
	return 0;
}



