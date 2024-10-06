#include<iostream>
#include<string>

using namespace std;

int main()
{
	string nomUtilisateur("GIRITEKA Arsene3");
	string prenom("BIBA");
	nomUtilisateur[3]='A';
	cout<<nomUtilisateur<<endl<<"la taille de mon nom est "<<nomUtilisateur.size()<<endl;
	nomUtilisateur.push_back('D');
	
	cout<<nomUtilisateur<<endl;
	string total;
	total += nomUtilisateur;
	total+=" ";
	total += prenom;
	cout<<total;
	return 0;
}
