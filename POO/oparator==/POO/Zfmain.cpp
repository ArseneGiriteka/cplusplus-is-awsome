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
	
	cout<<a<<" + "<<b<<" = "<<c<<endl;
	cout<<a<<" - "<<b<<" = "<<d<<endl;
	cout<<a<<" * "<<b<<" = "<<e<<endl;
	cout<<a<<" / "<<b<<" = "<<f<<endl;
	
	cout<<"abs(d) = "<<abs(d)<<endl<<"abs(b) = "<<abs(b)<<endl;
	
	cout<<"-a = "<<-a<<"la racine carre de d = "<<sqrt(d)<<endl;
	
	if(a>b) cout<<"a est superieur a b"<<endl;
	else if(a==b) cout<<"a est egal a b"<<endl;
	else cout<<"a est inferieur a b"<<endl;

	return 0;
}
