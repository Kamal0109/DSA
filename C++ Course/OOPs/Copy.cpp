#include <iostream>
#include <string>
using namespace std;


class student{
    private :
    int age;
   
    public :

    char *name;

    student(int age , char *name){
        this -> age = age;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }

    // Copy constructor 
    student(student const & s){
        this age -> s.age;
        this name -> new char[strlen(s.name) + 1];
        strcpy( this -> name, s.name);
    }

    void display(){
        cout<<name<<"  "<<age<<endl;
    } 
};



int main(){

    char name[] = "abcd";
    student s1(20 , name);
    s1.display();
    
    student s2(s1);
    s2.name[0] = 'x';
    s1.display(); 
    s2.display();
     
    return 0;
}

