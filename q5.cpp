#include<iostream>
using namespace std;
// function creation
// void myFunction()
// {
//     cout<<"My name is Raj";
// }

// int main(){
//     // int a = 20;
//     // int* b = &a;

//     // cout<<a<<"\n";
//     // cout<<b<<"\n";
//     // cout<<*b<<"\n";
//     // *b = 30;
//     // cout<<a<<"\n";
//     myFunction();
//     return 0 ;
    

// }
// void myfunc(string s="fdg"){
//    cout <<s;

// }
// int main(){
//  myfunc();
// }
int fun(int a,int b){
    return a+b;

}
int main(){
    int a = 20;
    int c = 30;
    int ans = fun(a,c);
    cout<<ans;

}