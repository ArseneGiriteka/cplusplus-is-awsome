#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	int position(0);
	string motDeforme;
	string motMystere("MYSTERE");
	
	srand(time(0));

	while(position<=motMystere.size())
	{
		position=rand() % motMystere.size();
		cout<<motMystere[position];
		motDeforme+=motMystere[position];
		motMystere.erase(position,1);
	}
	cout<<motDeforme<<endl;
	return 0;
}
