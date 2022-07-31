#include<iostream>
using namespace std;


void myfunc(int arr[5]){
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<"\n";

    }
    
}
int main()
{
    int arr[5] = {4,5,6,7,8};
    myfunc(arr);
}