// Kamal Kumar Tiwari
// 21312
// 23/2/23


#include <iostream>
using namespace std;


void area(double radius){
    cout<<"Area of cirle "<<3.14*(radius * radius)<<endl;
}

void area(double base, double height){
    cout<<"Area of triangle "<<(base* height)/2<<endl;
}

int main(){

    double radius = 2;
    double base = 4;
    double height = 6;

    
    area(radius);
    area(base,height);

    return 0;
}