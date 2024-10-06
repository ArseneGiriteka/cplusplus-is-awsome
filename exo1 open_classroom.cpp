#include<iostream>

using namespace std;

int main()
{
	double a(0),b(0),c(0);
	double produit(0);
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	produit=a*b;
	cout<<"a*b= "<<produit<<endl;
	double complex(a*b+c);
	cout<<"a*b+c= "<<complex<<endl;
	
	
	return 0;
}
