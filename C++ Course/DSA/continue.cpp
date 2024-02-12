#include <iostream>
using namespace std;
 
 
int main(){
   
    int x=5;
    while(x>0){
        if(x==2){
            continue;
            cout<<x<<endl;
        }
        cout<<x<<endl;
        x--;
    }
  
    return 0;
}