#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int taille=0;
    int positionInput=0,positionOutput=0;
    string const fileName("D:/serieux/open_classroom c++/kia/scrore.txt");
    ofstream myStream(fileName.c_str());//the previous file will be delete and write the new stuff.
    //to add on existed content you have to add ios::app ofstream myStream(fileName.c_str(),ios::app).
    //how to write a file
    if(myStream){
        int age = 19;
        myStream<<"helllo"<<endl<<"i am "<<age<<" years old"<<endl<<" and i will get 100% in polytech"<<endl;
        positionInput=myStream.tellp();
    }
    else{
        cout<<"an error has been detected"<<endl;
    }
    //how to read a file

    ifstream score("D:/serieux/open_classroom c++/kia/scrore.txt");

    if(score){
        string line;
        while(getline(score,line)){
            cout<<line<<endl;
            positionOutput=score.tellg();
            score.seekg(0, ios::end);
            taille = score.tellg();
        }
    }else{
        cout<<"error has been detected"<<endl;
    }
    /*
    there other fonctions:-fileName.open(directory path)to open;
                          -fileName.clase()to close;
                          -fileName.tellg()to know the current position for an input file;
                          -fileName.tellg()to know the current position for an output file 
    */
    cout<<"about input position= "<<positionInput<<endl;
    cout<<"about output position= "<<positionOutput<<endl;
    
    cout<<"the size of score.txt is "<<taille<<endl;
    return 0;
}