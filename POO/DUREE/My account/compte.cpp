#include "compte.h"

using namespace std;

void greatting()
{
	cout<<"bonjours"<<endl;
}

Accoumpt::Accoumpt()
{
	Accoumpt::userSignUp();
}

Accoumpt::~Accoumpt()
{
	
}

void Accoumpt::userSignUp()
{
	cout<<"The name you wish to be appearred on your Profile :";cin>>m_userName;
	cout<<"First name :";cin>>m_userFirstName;
	cout<<"Mindel name :";cin>>m_userMindelName;
	cout<<"Last name :";cin>>m_userLastName;
	cout<<"age :";cin>>m_userAge;
	cout<<"adresse :";cin>>m_userAdress;
	cout<<"phone number:";cin>>m_userPhoneNumber;
	cout<<"e-mail :";cin>>m_userEmail;
	cout<<"Enter your password :";cin>>m_userPassWord;
	string passWordVerifier;
	cout<<"Confirm your password :";cin>>passWordVerifier;
	
	if(m_userPassWord!=passWordVerifier)
	{
	  cout<<"retry !your password is incorrect"<<endl;
	}
	else
	{
		Accoumpt::storeSave();
		cout<<"vous avez creez votre compte avec succes"<<endl;
	}
	system("cls");
}

void Accoumpt::userLogin()
{
	string emailUserLog;
	string passwordUserLog;
	cout<<"E-mail :";cin>>emailUserLog;
	cout<<"password :";cin>>passwordUserLog;
	system("pause");
	system("cls");
	if(m_userPassWord!=passwordUserLog||m_userEmail!=emailUserLog)
	{
		string answer;
		cout<<"Bad loged info"<<endl;
		cout<<"do you wanna retry!(yes/no)";cin>>answer;
		if(answer=="yes") Accoumpt::userLogin();
		else cout<<"good bye"<<endl;
	}
	else
	{
		cout<<"wellcome on our platform"<<endl;
	}
}

void Accoumpt::storeSave()const
{
   string const accoumptSave("D:/open_classroom c++/POO/DUREE/My account/accaumptsStore.txt");
   ofstream accoumptStoring(accoumptSave.c_str(),ios::app);
   if(accoumptStoring)
   {
   		accoumptStoring<<"user name :"<<m_userName<<endl;
   		accoumptStoring<<"First name :"<<m_userFirstName<<endl;
   		accoumptStoring<<"mindel name :"<<m_userMindelName<<endl;
   		accoumptStoring<<"Last name :"<<m_userLastName<<endl;
   		accoumptStoring<<"Age :"<<m_userAge<<endl;
   		accoumptStoring<<"Adress :"<<m_userAdress<<endl;
   		accoumptStoring<<"Phone number :"<<m_userPhoneNumber<<endl;
   		accoumptStoring<<"E-mail :"<<m_userEmail<<endl;
		accoumptStoring<<"Password :"<<m_userPassWord<<endl<<"______________________________________"<<endl;
   }
   else
   {
   	cout<<"error the file can't be opened"<<endl;
   }
   
}




