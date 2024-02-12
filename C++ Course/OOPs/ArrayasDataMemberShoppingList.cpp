#include <iostream>
using namespace std;


class shopping_List{

    public:
    char item[10];

    void addItem(){
        cout<<"Enter the item "<<endl;
        cin>>item;
    }
    void delItem(){
        int n = 0; 
        cout<<"Enter the item no to be deleted "<<endl;
        cin>>n;
        item[n] = '0';
    }
    void printItem(){
        if(item[] != 0){
        cout<<item[];
        }
    }

};