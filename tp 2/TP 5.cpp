#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<double>score;
	score.push_back(13.5);
	score.push_back(15);
	score.push_back(14.4);
	score.push_back(1);
	
	double moyenne(0);
	int i;
	for(i=0;i<score.size();i++)
	{
		moyenne+=score[i];
		cout<<score[i]<<endl;
	}
		moyenne/=score.size();
	cout<<"moyenne = "<<moyenne;
	return 0;
}
