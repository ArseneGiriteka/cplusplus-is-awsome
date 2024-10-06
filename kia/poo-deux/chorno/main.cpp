#include"duree.hpp"

using namespace std;

int main(){
    Duree times_a(0,7,110),times_b(8,0,10);
    Duree koto;
    times_a.showDate();
    times_b.showDate();
    koto=times_a - times_b;
    koto.showDate();
    return 0;
}