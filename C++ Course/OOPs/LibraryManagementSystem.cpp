#include <iostream>
using namespace std;
 
 
class student{
    protected:
    string name;
    string branch;
    int rollNo;
    int semester;
    public:
    student(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the branch:"<<endl;
        cin>>branch;
        cout<<"Enter the rollNo:"<<endl;
        cin>>rollNo;
        cout<<"Enter the semester:"<<endl;
        cin>>semester;
    }
    void showData(){
        cout<<"Name "<<name<<endl;
        cout<<"Branch "<<branch<<endl;
        cout<<"RollNo "<<rollNo<<endl;
        cout<<"Semester "<<semester<<endl;
    }
};


class book{
    protected:
    int books_id[5];
    string bookName[5];
    public:
    book(){
        for(int i=0;i<5;i++){
            cout<<"Enter the book id :";
            cin>>books_id[i];
            cout<<"Enter the book name :";
            cin>>bookName[i];            
        }      
       
    } 
};


class issueData:public student,public book{
    protected:
    int rollNo[5];
    int student[5];   
    int roll;
    int studentP=0;
    public:
    issueData(){ 
        while(studentP<4 && roll==-1){
            cout<<"Enter the roll No: "<<endl;
            cin>>rollNo[studentP];
            studentP++;
        }        
    }
}; 



int main(){

    issueData A1;

 
    
 
    return 0;
}