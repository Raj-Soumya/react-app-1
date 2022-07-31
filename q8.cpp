#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    int x;//service charge of  first taxi
    int y;//service charge of second taxi
    cin >>x;
    cin >>y;
    
    if(x<y){
        cout << "FIRST";
    }else if(x>y){
        cout << "SECOND";
    }
    else{
        cout << "ANY";
    }
    
    
    
	return 0;
}
