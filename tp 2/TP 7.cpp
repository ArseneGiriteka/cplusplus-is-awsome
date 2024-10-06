#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream fichier("D:/fichier/kinamusic.txt");
	if(fichier)
	{
 		string ligne,mot;
 		fichier>>mot;
 		cout<<endl;
 		fichier.ignore();
		while(getline(fichier,ligne))
		cout<<ligne<<endl;
	}
	else
	cout<<"un eurreur s est produit !"<<endl;
	
	return 0;
}


