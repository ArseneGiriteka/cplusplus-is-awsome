#include<iostream>

using namespace std;
int main()
{
	int nbEnfant(0);
	cout<<"combien de enfants avez vous ?"<<endl;
	cin>>nbEnfant;
	
	switch(nbEnfant)
	{
		case 0: 
			cout<<"eh bien alors vous navez pas d enfant"<<endl;
			break;
		case 1:
			cout<<"c est quand le deuxieme ?"<<endl;
			break;
        case 2:
        	cout<<"comme c est beaux vos enfants!"<<endl;
        	break;
        default:
        	cout<<"arretez de faire tes gosses!";
			
		
		
	}
	
	return 0;
}
