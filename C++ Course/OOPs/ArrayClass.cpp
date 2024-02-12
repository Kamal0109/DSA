// Array within class
//Array as a class member in c++
#include <iostream>
using namespace std;


class Employee{
   
   private :

   int id;
   char name[20];

   public :

   void setData();

   void getData();


};


void Employee ::setData(){
   cout<<"Enter id "<<endl;
   cin>>id;
   cout<<"Enter name"<<endl;
   cin>>name;
}

void Employee :: getData(){
   cout<<"id is "<<id<<endl;
   cout<<"name is "<<name<<endl;

}


int main(){

    Employee emp;
    emp.setData();
    emp.getData();

    return 0;
}

