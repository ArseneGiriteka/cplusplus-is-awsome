#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream fichier("D:/fichier/kinamusic.txt");
	if(fichier)
	{
	
	string ligne;
	   
	   while(getline(fichier,ligne))
	        cout<<ligne<<endl;
	fichier.ignore();
	   string mot;
	   int i;
	   		while(fichier>>mot)
	   		{
	   		    cout<<mot<<endl;
	     	}
	   
	   
	   
		
	}
	else 
	{
		cout<<"l eurreur s est produit !"<<endl;
	}
	return 0;
}

