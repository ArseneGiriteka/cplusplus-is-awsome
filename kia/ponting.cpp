#include<iostream>

using namespace std;

int main(){
    int *pointeur(0);
    pointeur = new int;
    *pointeur=8;
    cout<<"how much is the variable "<<*pointeur<<" and where is he stored "<<pointeur<<endl;

    delete pointeur;

    cout<<"how much is the variable "<<*pointeur<<" and where is he stored "<<pointeur<<endl;

    *pointeur=0; 

    cout<<"how much is the variable "<<*pointeur<<" and where is he stored "<<pointeur<<endl;
   

    return 0;
}