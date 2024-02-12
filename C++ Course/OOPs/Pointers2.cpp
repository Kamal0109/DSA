#include <iostream>
using namespace std;


void update1(int a){
    a++;
}


void update2(int *p){
    *p = *p + 1;
}

void update3(int *array){
    array[0] = 8;
}


int main(){

    int a = 10;
    int *p = &a;
    
    cout<<"Before"<<a<<endl;
    update1(a);
    cout<<"After"<<a<<endl;

    cout<<"Before"<<a<<endl;
    update2(&a);
    cout<<"After"<<a<<endl;
  
    // Array
    int array[5] = {1,2,3,4,5};

    for(int i =0; i < 5;i++){
        cout<<array[i]<<" "<<endl;
    }

    update3(array);

    for(int i =0; i < 5;i++){
        cout<<array[i]<<" "<<endl;
    } 
 
    return 0;
}