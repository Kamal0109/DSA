#include <iostream>
using namespace std;


class employee{
   
    int id;
    int salary;

    public:
    void setId(){
      salary = 122;
      cout<<"Enter the id of employee "<<endl;
      cin>>id;
    }
    void getId(void){
        cout<<"Id of employee is "<<id<<endl;
    }

};



int main(){
   
    employee harry,chetan,bhusan;
    harry.setId();
    harry.getId();
 
    employee fb[4];
    for (int i = 0; i < 4; i++){
        fb[i].setId();
        fb[i].getId();
    }
    


    return 0;
}