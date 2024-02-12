#include <iostream>
using namespace std;
 

class Date{
    int date;
    int month;
    int year;
    int days=-(365*year + 30*month + date);
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
        cout<<days;
    }

    Date operator -(Date obj2);
    void fun(){
        int n;
        cin>>n;
        int x=n/30;
        int y=x/12;
        

    }
};


Date Date::operator -(Date obj2){
    Date temp;
    temp.date= obj2.date - date;
    temp.month= obj2.month - month;
    temp.year= obj2.year - year;
    return temp;

}

int main(){

    Date obj1(1,5,2002);
    Date obj2(31,6,2002);
    Date obj3 = obj2 - obj1;
    obj3.getDay();


 
    return 0;
}