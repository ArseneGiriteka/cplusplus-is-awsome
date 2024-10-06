#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream monFlux("D:/fichier/scores.txt");//ouverture du fichier;
	
	
	if(monFlux == false)
	cout<<"there is a problem"<<endl;
	else 
	cout<<"good";
	
	return 0;
}
