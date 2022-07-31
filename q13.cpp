#include<iostream>
using namespace std;

class student{
public:
    int roll;
    string name;

    student(int roll,string name){
        this->roll = roll;
        this->name = name;
}
     void print()
     {
        cout << roll << endl;
        cout << name << endl;

     }


};
    int main()
    {
        student s1(20,"raj");
        s1.print();


        student s2(s1);
        s2.print();
        



        // student *s2 = new student(23,"fdhjsk");
        // s2->print();



     




}