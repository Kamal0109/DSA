#include <iostream>
using namespace std;


class customer{
    string name;
    int adhar_no;
    int pan_no;
    string address;
    public:
    void getCustomer(){
        cout<<"Name"<<name<<endl;
        cout<<"Adhar No"<<adhar_no<<endl;
        cout<<"Pan_No"<<pan_no<<endl;
        cout<<"Address"<<address<<endl;
    }
    customer(){
       cout<<"Enter the name "; 
       cin>>name;
       cout<<"Enter the adhar_no ";
       cin>>adhar_no;
       cout<<"Enter the pan_no ";
       cin>>pan_no;
       cout<<"Enter the value of address ";
       cin>>address;
    }
};


class account{
    protected:
    int ac_no;
    int interest;
    int balance;

};


class savings : public account, public customer{
    public:
    savings():account(),customer(){
        cout<<"Enter ac_no ";
        cin>>ac_no;
        cout<<"Enter interest ";
        cin>>interest;
        cout<<"Enter balance ";
        cin>>balance;
    }
    void getsaving(){
        cout<<ac_no<<endl;
        cout<<interest<<endl;
        cout<<balance<<endl;
    }
};


class fixed : public account, public customer{
    public:
    fixed():account(),customer(){
        cout<<"Enter ac_no ";
        cin>>ac_no;
        cout<<"Enter interest ";
        cin>>interest;
        cout<<"Enter balance ";
        cin>>balance;
    }
    void getFixed(){
        cout<<ac_no<<endl;
        cout<<interest<<endl;
        cout<<balance<<endl;
    }
};

 
int main(){

    savings s();
    s.getCustomer();
    s.getsaving();

          
 
    return 0;
}