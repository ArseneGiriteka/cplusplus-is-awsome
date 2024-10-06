#include "Temps.h"

using namespace std;

Temps::Temps(int heures,int minutes,int secondes):m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{
	
}
Temps::Temps():m_heures(0),m_minutes(0),m_secondes(0)
{
	
}

bool Temps::estSuperieur(Temps const& b)bool
{
	if (m_heures>b.m_heures) return true;
	else if(m_heures==b.m_heures && m_minutes>b.m_minutes) return true;
	else if(m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes>b.m_heures) return true;
	else return false;
}

bool operator>(Time const& a,Time const& b)
{
	return a.estSuperieur(b);
}
