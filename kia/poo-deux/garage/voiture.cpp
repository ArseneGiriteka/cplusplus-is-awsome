#include"voiture.hpp"

using namespace std;

Voiture::Voiture():m_portes(4){

}

Voiture::Voiture(int prix, int portes):Vehicule(prix),m_portes(portes){

}

Voiture::~Voiture(){
    
}

void Voiture::afficher()const{
    cout<<"this is a car it has "<<m_portes<<" and it cost "<<m_prix<<endl;
}