#include <iostream>
using namespace std;


class student{

   public :

   int rollNo;
   int age; // As totalStudents are same for class so we dont want this should be diff for each person so we will use static
   static int totalStudents; // Total student present class

   student(){
     totalStudents++;
   }

   int getrollNo(){
    return rollNo;
   }

   static int getTotalStudent(){
      return totalStudents;
   }

};


int student :: totalStudents = 0; // Instialize static data member


int main(){
   
    student s1;

    cout<<s1.age<<" "<<s1.rollNo<<endl;
    cout<<student :: totalStudents<<endl; 

    return 0;
}