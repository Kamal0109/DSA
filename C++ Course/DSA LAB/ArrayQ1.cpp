#include <iostream>
using namespace std;

int main(){
    char input[10];
    cout<<"Give your expression"<<endl;
    cin.get(input , 6 , '\0');
    int count1, count2; 
    
    for(int i = 0  ; input[i] != '\0' ; i ++){ 
        if(input[i] == '('){
            count1 ++; 
        }
        else if(input[i] == ')'){
            count2 ++;
        }
    }

    if(count1 == count2){
        cout<<"Valid Input"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}