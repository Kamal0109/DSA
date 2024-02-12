#include <iostream>
using namespace std;
 
 
int main(){
   
    int num=1330;
    int digit=0;
    int n = 1;
    switch(n){
        case 1 : digit=num%100;
        num=num/100;
        cout<<"Number of 100 rupees notes is "<<num<<endl;

        case 2: digit=digit%20;
        num=num/20;
        cout<<"Number of 20 rupees notes is "<<num<<endl;

        case 3: digit=digit%1;
        num=num/1;
        cout<<"Number of 1 rupees notes is "<<num<<endl; 

    }


    return 0;
}