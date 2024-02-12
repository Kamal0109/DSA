#include <iostream>
using namespace std;


class shop{
    int itemId[10];
    int itemPrice[10];
    int counter;

    public:
    void initCounter(){
        counter = 0;
    }
    void setItemId(){
        cout<<"Enter the ID of item "<<counter+1<<endl;
        cin>>itemId[counter];
        cout<<"Enter the Price of the item "<<endl;
        cin>>itemPrice[counter];
        counter++;
    }
    void displayId(){
        for(int i = 0; i<counter; i++){
        cout<<"Id of the item no "<<i+1<<" is "<<itemId[i]<<endl;
        cout<<"Price of the item no "<<i+1<<" is "<<itemPrice[i]<<endl;
        }
    }
};


int main(){

    shop s1;
    s1.initCounter();
    s1.setItemId();
    s1.setItemId();
    s1.displayId();  

    return 0;
}