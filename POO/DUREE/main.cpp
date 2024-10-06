#include "Duree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
	Duree k(16,78,467),g(16,78,467);
	cout<<"k"<<k<<endl<<"g"<<g;
	if(k>g)
	cout<<"k est superieur a g"<<endl;
	else cout<<"k est inf"<<endl;
	if(k==g)
	cout<<"k=g"<<endl;
	return 0;
}
