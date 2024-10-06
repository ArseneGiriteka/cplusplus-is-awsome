#include "camion.hpp"

using namespace std;

Camion::Camion():Vehicule(90000),m_poids(30000){

}

Camion::Camion(int prix, int poids):Vehicule(prix),m_poids(poids){

}

Camion::~Camion(){

}

void Camion::afficher()const{
    cout<<"this is a truck it const "<<m_prix<<" its weight is "<<m_poids<<endl;
}