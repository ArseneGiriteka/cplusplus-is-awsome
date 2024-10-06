#include<iostream>

using namespace std;
void echange(double& a,double& b)
{
	double tampon(a);
	a=b;
	b=tampon;
}

int main()
{
	double x(3.4),y(6.5);
	cout<<"avant x = "<<x<<" et y = "<<y<<endl;
	echange(x,y);
	cout<<"apres x = "<<x<<" et y = "<<y<<endl;
	
	return 0;
}

