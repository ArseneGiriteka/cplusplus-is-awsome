#include "Zfraction.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main()
{
	Zfraction a(3,4);
	Zfraction b(6);
	 Zfraction c,d,e,f;

	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	
	cout<<"coe a ="<<a<<endl<<"donc le numerateur est "<<a.numerateur()<<" et le denominateur "<<a.denominateur()<<endl;
	cout<<a<<" est = "<<a.nombreReel()<<endl;
	cout<<"abs(a)= "<<abs(a)<<endl;
	cout<<"a exposant 3= "<<pow(a,2)<<endl;
	cout<<"la racine carre de a ="<<sqrt(a)<<endl;
	
	return 0;
}
