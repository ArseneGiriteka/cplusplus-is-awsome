#include"Zfraction.h"
using namespace std;

Zfraction::Zfraction():m_num(0),m_denom(1)
{
	
}

Zfraction::Zfraction(int num):m_num(num),m_denom(1)
{
	simplifyer();
}

Zfraction::Zfraction(int num=0,int denom=1)
{
	m_num=num;
	m_denom=denom;
	simplifyer();
}

Zfraction& Zfraction::simplifyer()
{
	int nbrCommun=pgcd(m_num,m_denom);
	m_num/=nbrCommun;
	m_denom/=nbrCommun;
	
	if(m_denom<0)
	{
		m_denom*=-1;
		m_num*=-1;
	}
	
	return *this;
}

void Zfraction::saisiMain()
{
	cin>>m_num;cout<<"/";cin>>m_denom;
	simplifyer();
}

Zfraction& Zfraction::operator+=(Zfraction const& b)
{
	m_num = b.m_num*m_denom + m_num*b.m_denom;
	
	m_denom = m_denom*b.m_denom;
	simplifyer();
	return *this;
}

Zfraction& Zfraction::operator-=(Zfraction const& b)
{
	m_num = m_num*b.m_denom - b.m_num*m_denom;
	
	m_denom*=b.m_denom;
	simplifyer();
	return *this;	
}

Zfraction& Zfraction::operator*=(Zfraction const& b)
{
	m_num*=b.m_num;
	m_denom*=b.m_denom;
	simplifyer();
	return *this;
}

Zfraction& Zfraction::operator/=(Zfraction const& b)
{
	m_num*=b.m_denom;
	m_denom*=b.m_num;
	simplifyer();
	return *this;
}

bool Zfraction::estEgal(Zfraction const& b)const
{
	return (m_num==b.m_num && m_denom==b.m_denom);
}


bool Zfraction::estGrand(Zfraction const& b)const
{
	return (m_num*b.m_denom>b.m_denom*m_denom);
}


void Zfraction::afficherFraction(ostream &flux)const
{   
	if(m_denom==1)
	  {
	  	flux<<m_num;
	  }
	  else
	  {
	    flux<<m_num<<"/"<<m_denom;	
	  }
}

bool operator>(Zfraction const& a,Zfraction const& b)
{
	return a.estGrand(b);
}
bool operator<(Zfraction const& a,Zfraction const& b)
{
	return !a.estGrand(b);
}
bool operator==(Zfraction const& a,Zfraction const& b)
{
	return a.estEgal(b);
}
bool operator!=(Zfraction const& a,Zfraction const& b)
{
	return !(a.estGrand(b));
}

Zfraction operator+(Zfraction const& a,Zfraction const& b)
{
    Zfraction copie(a);
    copie+=b;
    return copie;
}
Zfraction operator-(Zfraction const& a,Zfraction const& b)
{
	Zfraction copie(a);
	copie-=b;
	return copie;
}
Zfraction operator/(Zfraction const& a,Zfraction const& b)
{
	Zfraction copie(a);
	copie/=b;
	return copie;
}
Zfraction operator*(Zfraction const& a,Zfraction const& b)
{
	Zfraction copie(a);
	copie*=b;
	return copie;
}
ostream& operator<<(ostream& flux,Zfraction const& a)
{	
	a.afficherFraction(flux);
	return flux;
}

int pgcd(int a,int b)
{
	while(b!=0)
	{
		const int t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int Zfraction::numerateur()const
{
	return m_num;
}

int Zfraction::denominateur()const
{
	return m_denom;
}

double Zfraction::nombreReel()const
{
	double deno,nume;
	deno=m_denom;
	nume=m_num;
	return nume/deno;
}

Zfraction abs(Zfraction a)
{
	int numu,denumu;
	numu=abs(a.numerateur());
	denumu=abs(a.denominateur());
	Zfraction copie(numu,denumu);
	return copie;
}

Zfraction& Zfraction::operator-()
{
	m_num*=-1;
  return *this;
}

Zfraction sqrt(Zfraction a)
{
	int numu,denumu;
     if(a.numerateur()*a.denominateur()>0)
     {
        numu=sqrt(a.numerateur());
	    denumu=sqrt(a.denominateur());
	    Zfraction copie(numu,denumu);
	    
	    return copie;
	 }
}

Zfraction pow(Zfraction a,int n)
{
	int i(0);
	Zfraction copie(1,1);
	do
	{
		
		copie *= a;
		i++;
	}while(i<n);
	
	return copie;
}
