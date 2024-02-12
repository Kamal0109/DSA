#include <iostream>
using namespace std;
 

class fraction{
    int numerator;
    int denominator;
    public:
    fraction(){
        cout<<"constructor of base fraction"<<endl;
    }
    virtual ~fraction(){
        cout<<"Destructor of base fraction"<<endl;
    }
};


class integer : public fraction{
    int number;
    public:
    integer(){
        cout<<"Constructor of derived integer"<<endl;
    }
    ~integer(){
        cout<<"Destructor of derived integer"<<endl;
    }
};


int main(){
    
    integer * d = new integer();
    fraction * b = d;
    delete b; 
 
    return 0;
}