//Kamal Kumar Tiwari
//21312
#include <iostream>
using namespace std;


class employee{
    int id;
    int salary;
    public:
    employee(int a,int b){
        id=a;
        salary=b;
        cout<<"Constructor is called"<<endl;
    }
    ~employee(){
        cout<<"Destructor is called"<<endl;
    }
    void getData(){
        cout<<id<<" "<<salary<<endl;
    }
};


void setlocaldata(int a, int b){
    // local object
    employee e2(a,b);
    e2.getData();    
}


static employee e1(1,10);


int main(){
        
    setlocaldata(2,20);
    cout<<"1"<<endl;
    
    return 0;
}