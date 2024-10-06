#include"duree.hpp"

using namespace std;

Duree::Duree():m_heures(0),m_munites(0),m_secondes(0){
    
}

Duree::Duree(int heures,int munites,int secondes):m_heures(heures),m_munites(munites),m_secondes(secondes){
    if(m_secondes>=60){
        m_munites += m_secondes/60;
        m_secondes = m_secondes%60;
    }
    if(m_munites>= 60){
        m_heures += m_munites/60;
        m_munites = m_munites%60;
    }
}

bool Duree::isEqual(Duree const& time)const{
    if(m_heures==time.m_heures && m_munites==time.m_munites && m_secondes==time.m_secondes){
        return true;
    }else{
        return false;
    }
}

bool Duree::isLitle(Duree const& time)const{
    if((m_heures<time.m_heures)||(m_heures<time.m_heures && m_munites<time.m_munites)||(m_heures<time.m_heures && m_munites<time.m_munites && m_secondes<time.m_secondes)){
        return true;
    }
    else{
        return false;
    }
}

Duree Duree::calculateAddition(Duree const& time)const{
    Duree result(0,0,0);
    result.m_secondes = m_secondes+time.m_secondes;
    result.m_munites = m_munites+time.m_munites;
    result.m_heures = m_heures+time.m_heures;
    result.restoreDate();
    return result;
}

Duree Duree::calculateSubstraction(Duree const& time)const{
    Duree result;
    result.m_secondes = m_secondes-time.m_secondes;
    result.m_munites = m_munites-time.m_munites;
    result.m_heures = m_heures-time.m_heures;
    result.restoreDate();
    return result;
}

Duree Duree::calculateMultiplication(int number)const{
    Duree result;
    result.m_secondes = m_secondes*number;
    result.m_munites = m_munites*number;
    result.m_heures = m_heures*number;
    result.restoreDate();
    return result;
}

Duree Duree::calculateDivision(int number)const{
    Duree result;
    result.m_secondes = m_secondes/number;
    result.m_munites = m_munites/number;
    result.m_heures = m_heures/number;
    result.restoreDate();
    return result;
}

void Duree::showDate()const{
    cout<<m_heures<<" h  "<<m_munites<<" min  "<<m_secondes<<" sec"<<endl;
}

void Duree::restoreDate(){
    if(m_secondes>=60){
        m_munites += m_secondes/60;
        m_secondes = m_secondes%60;
    }
    if(m_munites>= 60){
        m_heures += m_munites/60;
        m_munites = m_munites%60;
    }
}

void Duree::resetDate(){
    m_secondes += m_heures*360;
    m_heures = 0;
    m_munites += m_munites*60;
    m_munites = 0;
}


bool operator==(Duree const& time1,Duree const& time2){
    return time1.isEqual(time2);
}

bool operator!=(Duree const& time1,Duree const& time2){
    return !(time1 == time2);
}

bool operator<(Duree const& time1,Duree const& time2){
    return (time1.isLitle(time2));
}

bool operator>(Duree const& time1,Duree const& time2){
    return !(time1<time2);
}

bool operator<=(Duree const& time1,Duree const& time2){
    return(time1<time2 || time1==time2);
}

bool operator>=(Duree const& time1,Duree const& time2){
    return(time1>time2 || time1==time2);
}

Duree operator+(Duree const& time1,Duree const& time2){
    Duree result;
    result = time1.calculateAddition(time2);
    return result;
}

Duree operator-(Duree const& time1,Duree const& time2){
    Duree result;
    result=time1.calculateSubstraction(time2);
    return result;
}

Duree operator*(Duree const& time,int number){
    Duree result;
    result=time.calculateMultiplication(number);
    return result;
}

Duree operator/(Duree const& time,int number){
    Duree result;
    result= time.calculateDivision(number);
    return result;
}
