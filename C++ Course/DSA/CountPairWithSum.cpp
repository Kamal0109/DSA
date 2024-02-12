#include <iostream>
using namespace std;
 
 
int main(){
 
    int x=1;
    switch(x){
        case 1: cout<<"First"<<endl;
        break;
        case 2: cout<<"Second"<<endl;  
        break;
        default: cout<<"This is default case:"<<endl;

    }

    char ch='1';
    switch(ch){
        case 1: cout<<"Num is called: "<<endl;
        break;
        case '1': cout<<"char is called: "<<endl;
        break;

    }
   
    return 0;
}