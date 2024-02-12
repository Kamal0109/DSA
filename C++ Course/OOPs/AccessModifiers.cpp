// Kamal Kumar Tiwari
// 21312
// Access Modifirers
// Date

#include <bits/stdc++.h>
using namespace std;


class cube{

    protected :
    int height;
   
    private :
    int length;
    int breadth;
    
    public :

    void print(){
        cout<<length<<" "<<breadth<<" "<<height<<endl;
    }

    void area1(int length, int breadth){
        cout<<length*breadth<<endl;
    }

    void setData(int l , int b, int h){
        length = l;
        breadth = b;
        height = h; 
    }
    
    void getData();

};

void cube::getData(){
    cout<<"hello";
}


int main(){
  
    cube c;
    c.area1(2,5);

    c.setData(1,2,3);
    c.print();
 
    c.getData();

    return 0;
}