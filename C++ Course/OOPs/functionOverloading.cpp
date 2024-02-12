// function overloading
#include <iostream>
using namespace std;

void sum(int a, int b, int c){
    
    cout<<"Print a+b+c "<<endl;
    cout<<a+b+c<<endl;

}


void sum(int a, int b){
    
    cout<<"Print a+b"<<endl;
    cout<<a+b<<endl;
}

void multiply(int x, int y){

    cout<<"x*y "<<x*y<<endl;
}


void multiply(double y , double x){

    cout<<"y*x "<<y*x<<endl;
}


int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    sum(a,b);
    sum(a,b,c);

    
    multiply(0.2,0.3);
    multiply(2,3);
    
   
    return 0;
}