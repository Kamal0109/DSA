#include <iostream>
using namespace std;

class student{
    private :
    int age;
    
    public :
    char *name;

    student(int age , char *name){
        this -> age = age;
        // Shallow Copy 
       // this -> name = name;
       // Deep Copy
       this -> name = new char[strlen(name) + 1];
       strcpy(this -> name, name);   
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};


int main(){
    char name[] = "abcd";
    student s1(20 , name);
    s1.display();

    name[3] = 'e';
    student s2(24, name);
    s2.display();

    return 0 ;
}