// creating vector
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int>v;

    v.push_back(15);
     v.push_back(71);
      v.push_back(1);
       v.push_back(21);
        v.push_back(19);
         v.push_back(17);
          v.push_back(14);
           v.push_back(12);

    for(int i = 0;i<v.size();i++){
        cout << v[i] << endl;
    }

return  0;



}