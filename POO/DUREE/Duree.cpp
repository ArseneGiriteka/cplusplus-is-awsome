#include "Duree.h"
using namespace std;

Duree::Duree(int heures,int minutes,int secondes):m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{
	simplifier();
}

void Duree::simplifier()
{
	m_minutes += m_secondes%60;
	m_secondes %= 60;
	
	m_heures += m_minutes%60;
	m_minutes %= 60;
}

void Duree::afficher(ostream& out)const
{
	out<<"il est "<<m_heures<<" : "<<m_minutes<<" : "<<m_secondes<<endl;
}

ostream &operator<<(ostream &out,Duree const& duree)
{
	duree.afficher(out);
	return out;
}

bool operator>(Duree const& duree1,Duree const& duree2)
{
	if(duree1.m_heures>duree2.m_heures) return true;
	else if(duree1.m_heures>duree2.m_heures && duree1.m_minutes>duree2.m_minutes) return true;
	else if(duree1.m_heures>duree2.m_heures && duree1.m_minutes>duree2.m_minutes && duree1.m_secondes>duree2.m_secondes) return true;
	else return true;
}

bool operator<(Duree const& duree1,Duree const& duree2)
{
	return !(duree1>duree2);
}

bool operator==(Duree const& duree1,Duree const& duree2)
{
	return (duree1.m_heures==duree2.m_heures && duree1.m_minutes==duree2.m_minutes && duree1.m_secondes==duree2.m_secondes);
}
