#include<iostream>

using namespace std;

int main(){
    int hours,min,sec;
    cout<<"hours :";cin>>hours;
    cout<<"munites :";cin>>min;
    cout<<"secondes :";cin>>sec;

    if(sec>=60){
        min+= sec/60;
        sec = sec%60;
    }

    cout<<"it's "<<hours<<"h  "<<min<<"min  "<<sec<<"secondes"<<endl;
    return 0;
}