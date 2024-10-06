#include<iostream>

using namespace std;

int main()
{
	int nbEnfants(-1);
	
	while(nbEnfants<0)
	{
		cout<<"vous combien d'enfants?"<<endl;
		cin>>nbEnfants;
	}
	cout<<"vous avez "<<nbEnfants<<endl;
	
	return 0;
}
