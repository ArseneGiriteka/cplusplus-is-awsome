#include"Personage.h"

using namespace std;

int main()
{
	string nomEnnemi;
	cin>>nomEnnemi;
	
	Personage david("david","Epee aiguisee",20),goliath("goliath","Epee aiguisee",20),barnabe;
	Personage ennemi(nomEnnemi);
	
	david.attaquer(goliath);
	david.attaquer(goliath);
	barnabe.attaquer(david);
	david.changerArme("arc",60);
	david.attaquer(barnabe);
	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.changerArme("Epee double tranchant veneuse",40);
	david.attaquer(barnabe);
	goliath.attaquer(goliath);
	
	david.afficherEtat();
	goliath.afficherEtat();
	barnabe.afficherEtat();
	
	goliath.boirePotionDeVie(60);
	david.attaquerBaguette(ennemi);
	
	goliath.afficherEtat();
	ennemi.afficherEtat();
	return 0;
}

