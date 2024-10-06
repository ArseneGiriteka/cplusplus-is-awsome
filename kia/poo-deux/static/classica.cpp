#include"header.hpp"

using namespace std;

int Classica::compteur = 0;//declare in .cpp file out of fonctions;

Classica::Classica(){
    compteur++;
}

Classica::~Classica(){
    compteur--;
}

void Classica::salue(){
    cout<<"goodmornig"<<endl;
}

int Classica::nombreInstance(){
    return compteur;
}