#include <bits/stdc++.h>
using namespace std;


int main(){
    
    array<int,5>num = {1,2,3,4,5};

    // Size 
    int size = num.size();

    // Print each element of array
    for(int i = 0; i<5; i++){
        cout<<num[i]<<endl;
    }

    //For element present at index;
    cout<<num.at(2);

    //front and back element
    cout<<num.front<<endl;
    cout<<num.back<<endl;
  
    return 0;
}