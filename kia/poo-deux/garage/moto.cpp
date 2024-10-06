#include"moto.hpp"

using namespace std;

Moto::Moto():m_vitesse(300){

}

Moto::Moto(int prix,double speed):Vehicule(prix),m_vitesse(speed){

}

Moto::~Moto(){
    
}

void Moto::afficher()const{
    cout<<"this is a motocycle it cost "<<m_prix<<"its speed is on "<<m_vitesse<<endl;
}