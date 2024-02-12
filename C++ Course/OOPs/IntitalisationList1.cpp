#include <iostream>
using namespace std;


class student{

    public :

    int age;
    const int rollNo; 
    int &x;  
   
   // Intitalisation List
    student(int r) : rollNo(r) , x(this -> age){
         
    }

};



int main(){

    student s1(101);
    s1.age = 20;

    return 0;
}