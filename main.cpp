#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
  cout<<"quel age avez vous?";
  
  string userName("sans nom");
  
  getline(cin,userName);
  
  int userAge(0);
  
  cin>>userAge;
  
  cout<<"vous avez "<<userAge<<"ans !"<<endl;
  
  cout<<"quel votre nom "<<endl;

  cout<<"vous vous appelez "<<userName<<endl;

	return 0;
}
