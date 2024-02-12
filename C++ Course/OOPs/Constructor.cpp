#include <iostream>
using namespace std;

class student{
    public :
    int rollNo;
    int age;
    void display(){
        cout<<age<<"    "<<rollNo<<endl;
    }
    //constructor
    student(int a, int r){
        rollNo = r;
        this -> age = a;
        cout<<"this    "<<this<<endl;
    }        
};


int main(){
    student s1(20 , 101);
    cout<<"s1:     ";
    s1.display();
    cout<<endl;
    
    // static(static)
    student s2(s1);
    cout<<"s2:     ";
    s2.display();
    cout<<endl;

    student *s3 = new student(20 , 102);

    // static(dynamic)
    student s4(*s3);

    // dynamic(static)
    student *s5 = new student(s1);

    // dynamic(dynamic)
    student *s6 = new student(*s3); 
    
    return 0; 
}





