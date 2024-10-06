#ifndef DEF_TEMPS
#define DEF_TEMPS

#include<iostream>

class Temps
{
	public:
		Temps();
		Temps(int heures,int minutes,int secondes);
	bool estSuperieur(Temps const& b)const;
		
	private:
		int m_heures;
		int m_minutes;
		int m_secondes;
};

bool operator>(Time const& b);

#endif
