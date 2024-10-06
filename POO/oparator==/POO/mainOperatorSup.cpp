#include "Time.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	Temps duree1(4,6,31),duree2(4,7,6);
	if(operator>(duree1,duree2))
	{
		std::cout<<"elle superieur"<<std::endl
	}
	else 
	{
		std::cout<<"elle n est pas superieur"<<std::endl;
	}
	return 0;
}
