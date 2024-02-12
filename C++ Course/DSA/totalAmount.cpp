#include <iostream>
using namespace std;
 
 
int main(){
    
    int amount;
    cin>>amount;
    
    while(amount !=0){
        switch(amount){
            case amount/100 >0: 
                cout<<"No of 100 rupees notes are:"<<amount%100;
                amount=amount/100;
                break;
            case amount/50 >0 : 
                cout<<"No of 50 rupees notes are :"<<amount%50;
                amount=amount/50;
                break;
            case amount/10 > 0:
                cout<<"No of 50 rupees notes are :"<<amount%50;  
                amount=amount/50;        
        }

    }
    
 
    return 0;
}