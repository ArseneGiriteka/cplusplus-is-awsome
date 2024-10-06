#ifndef DEF_DUREE
#define DEF_DUREE

#include"fonction.h"

class Duree
{
	public:
	Durre(int heures=0,int minutes=0,int secondes=0);
	bool estEgal(Duree const& b)const;
	private:
	m_heures;
	m_minutes;
	m_secondes;	
};

#endif
