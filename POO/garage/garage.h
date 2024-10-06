#ifndef GARAGE_DEF
#define GARAGE_DEF

#include <iostream>
#include <string>
#include <vector>

class Vehicule
{
	public:
		Vehicule();
		Vehicule(int prix,double vitesse);
		Vehicule(int prix,double vitesse,int anneeFablication);
		Vehicule(int prix,double vitesse,int anneeFabrication,int roues);
		virtual int nbrRoues()const = 0;//coe nbr est virtuelle pur Vehicule devient une classe abstraite
		virtual void afficher()const;//virtuelle cad qu'elle ne peut etre heritee ! 
	    virtual ~Vehicule();
	    
	protected:
		int m_prix;
		double m_vitesse;
		int m_anneeFablication;
		int m_nbrRoues;
};

class Voiture:public Vehicule
{
	public:
		virtual Voiture();
		Voiture(int portes,int prix,double vitesse);
		Voiture(int portes,int prix,double vitesse,int anneeFablication);
		Voiture(int portes,int prix,double vitesse,int anneeFablication,int roues);
		virtual int nbrRoues()const;
		virtual void afficher()const;//pour dire qu'il s'agit d une fonction virtuelle pure cad elle ne peut etre utilis que par ses filles suelle pas vehicule
		virtual ~Voiture();
		
	protected:

		int m_nbPortes;
};

class Moto:public Vehicule
{
	public:
		Moto();
		Moto(int amortisseurs,int prix,double vitesse);
		Moto(int amortisseurs,int prix,double vitesse,int anneeFablication);
		Moto(int amortisseurs,int prix,double vitesse,int anneFablication,int roues);
		virtual int nbrRoues()const;
		virtual void afficher()const;
		virtual ~Moto();
		
	protected:
		int m_nbAmortisseurs;
};

class Camion:public Vehicule
{
	public:
		Camion();
		Camion(double poidsApp);
		Camion(double poidsApp,int prix,double vitesse);
		Camion(double poidsApp,int prix,double vitesse,int anneeFablication);
		Camion(double poidsApp,int prix,double vitesse,int anneeFablication,int roues);
		virtual int nbrRoues()const;
		void afficher()const;
		~Camion();
	protected:
		double m_poidsApp;
};

class Garage
{
	public:
		Garage();
		Garage(std::vector<Vehicule*> maVehicule);
		std::vector<Vehicule*> ajout(Vehicule* maVehicule);
		std::vector<Vehicule*> supprimer();
		~Garage();
		void afficher()const;
	
	private:
		std::vector<Vehicule*>m_listeDeGarage;	
};
#endif
