#include<iostream>

using namespace std;

int main()
{
	int nbEnfants(-1);
	char correct;
	do
	{
		cout<<"combien d enfants avez vous ?--->";
		cin>>nbEnfants;
	}while(nbEnfants<0);
	
	if(nbEnfants==1) cout<<"merci vous avez 1 enfant";
	else
	cout<<"merci vous avez "<<nbEnfants<<" enfants";
	return 0;
}
