#ifndef DEF_ZFRACTION
#define DEF_ZFRACTION

#include<iostream>
#include<cmath>

class Zfraction
{
	public:
	Zfraction();
	Zfraction(int num);
	Zfraction(int num,int denom);
	void saisiMain();
	Zfraction& operator+=(Zfraction const& b);
	Zfraction& operator-=(Zfraction const& b);
	Zfraction& operator*=(Zfraction const& b);
	Zfraction& operator/=(Zfraction const& b);
	bool estEgal(Zfraction const& b)const;
	bool estGrand(Zfraction const& b)const;
	void afficherFraction(std::ostream &flux)const;
	Zfraction& simplifyer();
	int numerateur()const;
	int denominateur()const;
	double nombreReel()const;
	Zfraction& operator-();
	
	private:
		
	int m_num;
	int m_denom;	
};
void afficherSimple(Zfraction const& a);
std::ostream& operator<<(std::ostream& flux,Zfraction const& a);
Zfraction operator+(Zfraction const& a,Zfraction const& b);
Zfraction operator-(Zfraction const& a,Zfraction const& b);
Zfraction operator/(Zfraction const& a,Zfraction const& b);
Zfraction operator*(Zfraction const& a,Zfraction const& b);
	bool operator<(Zfraction const& a,Zfraction const& b);
	bool operator>(Zfraction const& a,Zfraction const& b);
	bool operator==(Zfraction const& a,Zfraction const& b);
	bool operator!=(Zfraction const& a,Zfraction const& b);
int pgcd(int numera,int denoma);
Zfraction abs(Zfraction a);
Zfraction sqrt(Zfraction a);

#endif
