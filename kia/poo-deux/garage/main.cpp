#include<iostream>
#include"vehicule.hpp"
#include"voiture.hpp"
#include"moto.hpp"
#include"camion.hpp"
#include<vector>

using namespace std;

void presenter(Vehicule const& v){
    v.afficher();
}

int main(){
    vector<Vehicule*> vehicleList;
    vehicleList.push_back(new Voiture(50000,6));
    vehicleList.push_back(new Voiture(7000000,5));
    vehicleList.push_back(new Moto(30000,3000));
    vehicleList.push_back(new Camion(90000,30000));

    vehicleList[1]->afficher();
    vehicleList[2]->afficher();
    vehicleList[3]->afficher();

    for(int i=0; i< vehicleList.size(); i++){
        delete vehicleList[i];
        vehicleList[i] = 0;
    }
    return 0;
}