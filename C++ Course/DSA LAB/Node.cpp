#include <iostream>
using namespace std;


class student{
	public :                   // class have two things properties and function
    int rollNo;                // properties
	int age;
	void display(){            // function
		cout<<age<<"   "<<rollNo<<endl;
	}
	int getAge(){
		return age;
	}
	void setAge(int a){
		age = a;
	}
	void setrollNo(int b){
		rollNo = b;
	}
};


 
// classes are user defined datatype
// objects are copy of classes

int main(){
	//creating object statically 
	student s1;
	student s2;
	student s3,s4; 

	//entering roll no and age for each student
	s1.age = 24;
	s1.rollNo = 101;
	cout<<s1.rollNo<<"  "<<s1.age<<endl;

	s2.age = 30;
	s2.rollNo = 102;
	cout<<s2.rollNo<<"  "<<s2.age<<endl;
	
	//create object dynamically
	
	student *s5 = new student;
	(*s5).age = 34;
	(*s5).rollNo = 103;

	student *s6 = new student;
	s6 -> age = 22;
	s6 -> rollNo = 104; 
	cout<<s6->age<<"   "<<s6->rollNo<<endl;



	// new problem 
	student s10;
	s10.age = 22;
	s10.rollNo = 103;
	s10.display();


	student *s11 = new student;
	(*s11).age = 23;
	s11 -> rollNo = 110;
	s11->display();
	(*s11).getAge(); 


	// getters and setters
	student s12;
	s12.setAge(12);
	s12.setrollNo(112);
	s12.display();

	student *s13 = new student;
	s13->setAge(13);
	s13->setrollNo(113);
	s13->display();

	
	return 0;
}