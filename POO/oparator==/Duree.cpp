#include"Duree.h"

using namespace std;
void Duree::Duree(int heures,int minutes,int seconde):m_heures(heures),m_minutes(minutes)m_secondes(secondes)
{
	
}

bool Duree::estEgal(Duree const& b)const
{
	return if(m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes==b.m_secondes);
}



