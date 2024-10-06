#ifndef GARAGE_DEF
#define GARAGE_DEF

#include<iostream>
#include<vector>
#include"vehicule.hpp"

class Garage{
    public:
    Garage();
    Garage(vector<Vehicule*> const& list);
    ~Garage();
    void addVehicule(Vehicule const& Vehicule);
    void eraseVehicule()

    private:
    std::vector<Vehicule*> myList;
}

#endif