#include"vehicule.hpp"

using namespace std;

Vehicule::Vehicule():m_prix(900000),m_madeDate("03/mars/3000"){

}

Vehicule::Vehicule(int prix):m_prix(prix),m_madeDate("03/mars/3000"){
    
}

Vehicule::Vehicule(int prix, string madeDate):m_prix(prix),m_madeDate(madeDate){

}

Vehicule::~Vehicule(){

}

void Vehicule::afficher()const{
    cout<<"this is a vehicle ,it cost "<<m_prix<<" it is made "<<m_madeDate<<endl;
}