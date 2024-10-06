#ifndef COUMPT_DEF
#define COUMPT_DEF

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>

class Accoumpt
{
	public:
		Accoumpt();
		~Accoumpt();
		void userLogin();
		void userSignUp();
		void userPasswordReminder()const;
		void storeSave()const;
	protected:
		std::string m_userName;
		std::string m_userFirstName;
		std::string m_userMindelName;
		std::string m_userLastName;
		int m_userAge;
		std::string m_userPassWord;
		std::string m_userAdress;
		int m_userPhoneNumber;
		std::string m_userEmail;
};

void greatting();

#endif
