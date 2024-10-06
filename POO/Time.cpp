#include "Time.h"
using namespace std;
Time::Time():m_heures(0),m_minutes(0),m_secondes(0)
{
	
}

Time::Time(int heures,int minutes,int secondes):m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{
	
}

Time::~Time()
{
	
}

bool Time::estEgal(Time const& b)const
{
	return (m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes==b.m_secondes);	
}

bool Time::estPlusGrand(Time const& b)const
{
	if(m_heures>b.m_heures) return true;
	else if(m_heures==b.m_heures && m_minutes>b.m_minutes) return true;
	else if(m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes>b.m_secondes) return true;
}

Time& Time::operator+=(Time const& b)
{
	m_secondes+=b.m_secondes;
	
	m_minutes+=m_secondes/60;
	m_secondes%=60;
	
	m_minutes+=b.m_minutes;
	
	m_heures+=m_minutes/60;
	m_minutes%=60;
	
	m_heures+=b.m_heures;
	return *this;
}

Time& Time::operator-=(Time const& b)
{
	m_secondes-=b.m_secondes;
	
	m_minutes==m_secondes/60;
	m_secondes%=60;
	
	m_minutes-=b.m_minutes;
	
	m_heures-=m_minutes/60;
	m_minutes%=60;
	
	m_heures-=b.m_heures;
	return *this;
}

void Time::afficherHeures(ofstream& flux)
{
	cout<<m_heures<<"h"<<m_minutes<<"min"<<m_secondes<<"sec"<<endl;
}

Time operator-(Time const& a,Time const& b)
{
	Time copie(a);
	copie-=b;
   return copie;	
}

Time operator+(Time const& a,Time const& b)
{
	Time copie(a);
	copie+=b;
	return copie;
}

void Time::afficherHeures()
{
	m_minutes+=m_secondes/60;
	m_secondes%=60;
	
	m_heures+=m_minutes/60;
	m_minutes%=60;
	
	cout<<m_heures<<"h "<<m_minutes<<"min "<<m_secondes<<"sec"<<endl;
}

bool operator==(Time const& a, Time const& b)
{
	return a.estEgal(b);
}

bool operator!=(Time const& a, Time const& b)
{
	return !(a.estEgal(b));
}

bool operator>(Time const& a,Time const& b)
{
	return (a.estPlusGrand(b));
}

ostream& operator<<(ostream &flux,Time const& a)
{
	a.afficher(flux);
	return flux;
}
