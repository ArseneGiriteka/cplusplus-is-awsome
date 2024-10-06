#include "Duree.h"

using namespace std;

Duree::Duree(int heures,int minutes,int secondes):m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{
	
}

bool Duree::estEgal(Duree const& b)const
{
	return (m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes==b.m_secondes);
}

bool operator!=(Duree const& a, Duree const& b)
{
	return !(a.estEgal(b));
}

bool operator==(Duree const& a, Duree const& b)
{
	return a.estEgal(b);
}
