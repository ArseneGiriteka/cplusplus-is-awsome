#include"Duree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
{
	Duree duree1(0,10,28),duree2(0,15,2);
	
	if(duree1==duree2)
	cout<<"duree1 et duree2 sont identiques"<<endl;
	else
	cout<<"duree1 et duree2 sont differents"<<endl;
	
	return 0;
}
