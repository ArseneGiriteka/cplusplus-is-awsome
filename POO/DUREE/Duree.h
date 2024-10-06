#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>

class Duree
{
	public:
		Duree(int heures=0,int minutes=0,int secondes=0);
	private:
		void simplifier();
		void afficher(std::ostream& out)const;
		int m_heures;
		int m_minutes;
		int m_secondes;
	friend std::ostream &operator<<(std::ostream &out,Duree const& duree);
	friend bool operator>(Duree const& duree1,Duree const& duree2);
	friend bool operator<(Duree const& duree1,Duree const& duree2);
	friend bool operator==(Duree const& duree1,Duree const& duree2);
};



#endif
