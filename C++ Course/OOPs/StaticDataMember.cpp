#include <bits/stdc++.h>
using namespace std;


class cube{
   
    private :
    static int length;
    int breadth;
    int height;

   
    public :

    void updation(){
     
       length++;
       breadth++;
   
    }


    void print(){
        cout<<length<<" "<<breadth<<endl;
    }


    void setData(int l , int b, int h){
        length = l;
        breadth = b;
        height = h; 
    }  
};

int cube ::length;


int main(){
  
    cube s;
    cube l;
    cube m;

    s.setData(1,2,3);
    l.setData(4,5,6);
    m.setData(7,8,9);

    s.updation();
    l.updation();
    m.updation();

    s.print();
    l.print();
    m.print();

    return 0;
}