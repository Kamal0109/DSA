#include <iostream>
using namespace std;
 
 
int main(){
    
    int n=6;
   int j=0;
   int k=1;
    for(int i=0;i<11;j++){
    while(j<k){
       cout<<"*";
       if(j<6)
       k=j+2;
       if(i>6){
        k=j-2;
       }
       j++;
    }
    cout<<"*";
    }
 
    return 0;
}