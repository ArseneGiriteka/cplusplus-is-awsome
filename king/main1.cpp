#include <iostream>
#include"math.h"
#include"haeder.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a(87),b(87);
	greatting();
	cout<<"avant a = ";cin<<a;
	cout<<"avant b = ";cin<<b;
	
	b=ajouteDeux(a);
	
	cout<<"apres a = "<<a;
	cout<<"apres b = "<<b;
	
	
	return 0;
}
