#ifndef FRACTION_H
#define FRACTION_H

#include<iostream>

class Duree{
    public:
    
    Duree();
    Duree(int heures,int munites,int secondes);
    bool isEqual(Duree const& time)const;
    bool isLitle(Duree const& time)const;

    Duree calculateAddition(Duree const& time)const;
    Duree calculateSubstraction(Duree const& time)const;
    Duree calculateMultiplication(int number)const;
    Duree calculateDivision(int number)const;

    void showDate()const;
    void resetDate();
    void restoreDate();

    private:
    int m_heures;
    int m_munites;
    int m_secondes;

};

bool operator==(Duree const& time1, Duree const& time2);
bool operator!=(Duree const& time1, Duree const& time2);
bool operator<(Duree const& time1, Duree const& time2);
bool operator>(Duree const& time1, Duree const& time2);
bool operator<=(Duree const& time1, Duree const& time2);
bool operator>=(Duree const& time1, Duree const& time2);
Duree operator+(Duree const& time1, Duree const& time2);
Duree operator-(Duree const& time1, Duree const& time2);
Duree operator*(Duree const& time1, Duree const& time2);
Duree operator/(Duree const& time1, Duree const& time2);


#endif //