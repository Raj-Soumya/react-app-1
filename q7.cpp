#include<iostream>
using namespace std;

// function overloading;
int func1(int a,int b){
    return a+b;

}
double func1(double a, double b){
    return a+b;

}


int main(){
    cout<<func1(5,4)<<"\n";
    cout<<func1(5.2,4.3);


}