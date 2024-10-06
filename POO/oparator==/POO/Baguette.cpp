#include"Baguette.h"

using namespace std;

Baguette::Baguette():m_nom("calcatura"),m_degats(5)
{
	
}

Baguette::Baguette(string nomBaguette,int degatsBaguette):m_nom(nomBaguette),m_degats(degatsBaguette)
{
	
}

Baguette::~Baguette()
{
	
}

void Baguette::changer(string nomNouvelleBaguette,int degatsNouvelleBaguette)
{
	m_nom=nomNouvelleBaguette;
	m_degats=degatsNouvelleBaguette;
}

void Baguette::afficher()const
{
	cout<<"Baguette: "<<m_nom<<" (degats = "<<m_degats<<")"<<endl;
}

int Baguette::getDegats()const
{
	return m_degats;
}

