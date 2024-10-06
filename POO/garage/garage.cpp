#include "garage.h"

using namespace std;

Vehicule::Vehicule():m_prix(50000),m_vitesse(251),m_anneeFablication(2010),m_nbrRoues(2)
{
	
}
void Vehicule::afficher()const
{
	cout<<"ceci est un vehicule fabliquee en "<<m_anneeFablication<<endl;
	cout<<"vitesse maximal "<<m_vitesse<<"km/s"<<endl;
	cout<<"nombres de  roues: "<<m_nbrRoues<<endl;
	cout<<"Il s'achete de"<<m_prix<<"$"<<endl;
}

Vehicule::Vehicule(int prix,double vitesse):m_prix(prix),m_vitesse(vitesse),m_anneeFablication(2010),m_nbrRoues(2)
{
	
}

Vehicule::Vehicule(int prix,double vitesse,int anneeFablication):m_prix(prix),m_vitesse(vitesse),m_anneeFablication(anneeFablication),m_nbrRoues(2)
{
	
}

Vehicule::Vehicule(int prix,double vitesse,int anneeFablication,int roues):m_prix(prix),m_vitesse(vitesse),m_anneeFablication(anneeFablication),m_nbrRoues(roues)
{
	
}

Vehicule::~Vehicule()
{
	
}

int Vehicule::nbrRoues()const
{
	return m_nbrRoues;
}

Voiture::Voiture():Vehicule(),m_nbPortes(5)
{
	
}

Voiture::Voiture(int portes,int prix,double vitesse):Vehicule(prix,vitesse),m_nbPortes(portes)
{
	
}

Voiture::Voiture(int portes,int prix,double vitesse,int anneeFablication):m_nbPortes(portes),Vehicule(prix,vitesse,anneeFablication)
{
	
}

Voiture::Voiture(int portes,int prix,double vitesse,int anneeFablication,int roues):m_nbPortes(portes),Vehicule(prix,vitesse,anneeFablication,roues)
{
	
}

int Voiture::nbrRoues()const
{
	return 4;
}

void Voiture::afficher()const
{
	cout<<"ceci est une voiture fabliquee en"<<m_anneeFablication<<endl;
	cout<<"Portes :"<<m_nbPortes<<endl;
	cout<<"nombre de roues :"<<m_nbrRoues<<endl;
	cout<<"elle s'achete "<<m_prix<<endl;
	cout<<" et peut attendre "<<m_vitesse<<" km/s"<<endl;
}

Voiture::~Voiture()
{
	
}

Moto::Moto():Vehicule(),m_nbAmortisseurs(2)
{
	
}

Moto::Moto(int amortisseurs,int prix,double vitesse):m_nbAmortisseurs(amortisseurs),Vehicule(prix,vitesse)
{
	
}

Moto::Moto(int amortisseurs,int prix,double vitesse,int anneeFablication):m_nbAmortisseurs(amortisseurs),Vehicule(prix,vitesse,anneeFablication)
{
	
}

Moto::Moto(int amortisseurs,int prix,double vitesse,int anneeFablication,int roues):m_nbAmortisseurs(amortisseurs),Vehicule(prix,vitesse,anneeFablication,roues)
{
	
}

int Moto::nbrRoues()const
{
	if(m_nbrRoues==3) return 3;
	else
	return 2;
}

void Moto::afficher()const
{
	cout<<"ceci est une moto fabliquee en "<<m_anneeFablication<<endl;
	cout<<"elle a "<<m_nbAmortisseurs<<" amortisseurs"<<endl;
	cout<<"nombres de roues est "<<m_nbrRoues<<endl;
	cout<<"elle s'achete "<<m_prix<<endl;
	cout<<" et peut attendre les"<<m_vitesse<<" km/s"<<endl;
}

Moto::~Moto()
{
	
}

Camion::Camion():Vehicule(),m_poidsApp(4E4)
{
	
}

Camion::Camion(double poids):Vehicule(),m_poidsApp(poids)
{
	
}

Camion::Camion(double poids,int prix,double vitesse):Vehicule(prix,vitesse),m_poidsApp(poids)
{
	
}

Camion::Camion(double poids,int prix,double vitesse,int anneeFablication):m_poidsApp(poids),Vehicule(prix,vitesse,anneeFablication)
{
	
}

Camion::Camion(double poids,int prix,double vitesse,int anneeFablication,int roues):m_poidsApp(poids),Vehicule(prix,vitesse,anneeFablication,roues)
{
	
}

int Camion::nbrRoues()const
{
	if(m_nbrRoues==4) return 4;
	else if(m_nbrRoues==6) return 6;
	else return 10;
}

void Camion::afficher()const
{
	cout<<"ceci est une camion fabliquee en "<<m_anneeFablication<<endl;
	cout<<"qui peut supporter "<<m_poidsApp<<" kg"<<endl;
	cout<<"nbr de roues = "<<m_nbrRoues<<endl;
	cout<<"prix :"<<m_prix<<endl;
	cout<<"la vitesse maximale est de "<<m_vitesse<<" km/h"<<endl;
}

Camion::~Camion()
{
	
}

Garage::Garage():m_listeDeGarage(0)
{
}

Garage::~Garage()
{
}

vector<Vehicule*> Garage::ajout(Vehicule* maVehicule)
{
	m_listeDeGarage.push_back(maVehicule);
	return m_listeDeGarage;
}

vector<Vehicule*> Garage::supprimer()
{
		m_listeDeGarage.pop_back();
		return m_listeDeGarage;
}

void Garage::afficher()const
{
	for(int i(0);i<m_listeDeGarage.size();i++)
	{
		Vehicule* copie;
		cout<<m_listeDeGarage[i]<<endl;
		copie=m_listeDeGarage[i];
		copie->afficher();
	}
}
