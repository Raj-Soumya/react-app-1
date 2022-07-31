#include<iostream>
#include<strings.h>
using namespace  std;

int main()
{
    string str;
    getline(cin,str);
    cout << "The initial string is:";
    cout << str<<endl;
    cout << "After pushback the string is:"<<endl;
    str.push_back('r');
    cout<<str<<endl;
    cout<<"After popup the string is :"<<endl;
    str.pop_back();
    cout << str;



    
}