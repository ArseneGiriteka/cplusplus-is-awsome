#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

string melangeLettres(string mot)//f(X) qui recoit une chaine de char et renvoie la meme chaine melange;
{
	int position(0),i;
	string motDeforme;
	srand(time(0));//definition d un f(x) aleatoire;
	while(mot.size()!=0)//tant que la chaine aura des characteres
	{
		position=rand() % mot.size();
		motDeforme+=mot[position];
		mot.erase(position,1);
	}
	return motDeforme;
}

int main()
{
	string motSaisi;
	string motRepondu;
	string melange;//est declare pour evite le change du motmelange lors de l execution;
	cout<<"saisir un mot"<<endl;cin>>motSaisi;
	melange=melangeLettres(motSaisi);
	do
	{
		cout<<"quel est ce mot "<<melange<<"?"<<endl;
		cin>>motRepondu;
	}while(motRepondu!=motSaisi);//on refaira tant qu le mot entre sera different de seul saisi;
	cout<<"bravo tu l as eu!";
	
	
	return 0;
}
