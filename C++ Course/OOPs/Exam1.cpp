#include <iostream>
using namespace std;
 

class Date{
    int date;
    int month;
    int year;
    public:
    Date(){
        date=0;
        month=0;
        year=0;
    }
    Date(int a,int b,int c){
        date=a;
        month=b;
        year=c;
    }
    void getDate(){
        cout<<"Date is "<<date<<endl;
        cout<<"Month is "<<month<<endl;
        cout<<"Year is "<<year<<endl;
    }
    void getDay(){
        cout<<"Days will be"<<
    }
    Date operator -(Date obj2){}
};


Date Date::operator -(Date obj2){
    Date temp;
    temp.date= date - obj2.date;
    temp.month= month - obj2.month;
    temp.year= year - obj2.year;
    return temp;

}

int main(){

    Date obj1(1,1,1);
    Date obj2(1,2,2);
    Date obj3 = obj1 -obj2;
 
    return 0;
}