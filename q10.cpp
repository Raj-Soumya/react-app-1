// class and object
#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
    int roll;
    int age;
    public:
    string name;

    int getroll(){
        return roll;
    }
    int getage(){
        return age;
    }
    int setage(int h){
        roll = h;
    }
    int setage(int a){
        age = a;
    }



};
int main()
{
   student s1;
//    s1.roll = 20;
//    s1.age = 30;
   s1.name = "rah";
   s1.setage(30);
   s1.setroll(30);
   cout << s1.getroll() << endl;
   cout << s1.getage() << endl;
   cout << s1.name << endl;
   return 0;
   



}
