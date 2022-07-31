#include<iostream>
using namespace std;

class hero{
public:
    int health;
    char level;


// int gethealth(){
//     return health;
// }
// char getlevel(){
//     return level;
// }

// void sethealth(int h){
//     health = h;
// }
// void setlevel(int l){
//     level = l;
// }

};

int main()
{
    // static allocation

    hero a;
    // dynamic allocation
     hero* b = new hero;

// hero raj;
// raj.sethealth(70);
// cout << "Raj health is "<<raj.gethealth()<<endl;
// // raj.health= 60;



// raj.level = 'A';
// // cout <<"Health is :"<<raj.health<<endl;
// cout << "Level is :"<< raj.level<<endl;
//  return 0;

// }