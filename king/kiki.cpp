#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int diviseur(1),nombre(0);
 	cout<<"nombre = ";cin>>nombre;
 	cout<<"le diviseurs de "<<nombre<<" sont "<<endl;
 	if(nombre%diviseur==0)
	 do
 	{
 		cout<<diviseur;
 		diviseur++;
	 }while(diviseur<=nombre);
 	
 	
 	
	return 0;
}
