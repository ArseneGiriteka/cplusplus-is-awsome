#ifndef DEF_TIME
#define DEF_TIME
#include<iostream>

class Time
{
	public:
		Time();
		Time(int heures=0,int minutes=0,int secondes=0);
		~Time();
	bool estEgal(Time const& b)const;
	bool estPlusGrand(Time const& b)const;
	Time& operator+=(Time const& b);
	Time& operator-=(Time const& b);
	void afficherHeures();
	void afficher(std::ostream& flux);
	private:
		int m_heures;
		int m_minutes;
		int m_secondes;	
};

Time operator+(Time const& a,Time const& b);
Time operator-(Time const& a,Time const& b);
bool operator!=(Time const& a ,Time const& b);
bool operator==(Time const& a ,Time const& b);
bool operator>(Time const& a, Time const& b);

#endif
