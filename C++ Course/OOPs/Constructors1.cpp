// 01-03-2023
// Kamal Kumar Tiwari
// 21312
// Constructors in c++

#include <iostream>
using namespace std;


class student{

    int roll_No;
    string name;
    string branch;
    string address;

    public:
    // Default constructor
    student(){
        roll_No = 21312;
        name = "Kamal";
        branch = "IT";
        address = "Jaipur";
    }
    // Parametrised constructor
    student(int a,string b,string c,string d){
        roll_No = a;
        name = b;
        branch = c;
        address = d;       
    }
    void updateRollNo(int e){
       roll_No = e;
    }
    void getStudent(){
        cout<<"Roll No is "<<roll_No<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Branch is "<<branch<<endl;
        cout<<"Address is "<<address<<endl;
    }
    // Constructor with default arguments
    student(int roll_No = 21311, string name = "Guarav", string branch = "IT",string address = "Jaipur"){
        roll_No = roll_No;
        name = name;
        branch = branch;
        address = address;
    }
    // Copy Constructor

};


int main(){

    student s1;
    s1.getStudent();

    student s2(21314,"Mayank","IT","Jaipur");
    s2.getStudent();

    student s3(21314,"Kanisk","IT","Gwalior");
    s3.updateRollNo(21313);
    s3.getStudent();

}