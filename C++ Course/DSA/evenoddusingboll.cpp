#include <iostream>
using namespace std;
 

bool isEven(int num){
    if(num&1==0){
        return 0;  
    }
    else{
        return 1;
    }
}


int main(){
   
    int num;
    cin>>num;
    
    cout<<isEven(num)<<endl;
   
    return 0;
}