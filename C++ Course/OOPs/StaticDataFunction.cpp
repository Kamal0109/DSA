#include <bits/stdc++.h>
using namespace std;


class cube{
   
    private :

    static int length;
    int breadth;
    int height;

   
    public :

    static int updation(){
     
     return length++;
       
    }


    void print(){
        cout<<length<<endl;
    }


    void setData(int l , int b, int h){
        length = l;
        breadth = b;
        height = h; 
    }  
};

int cube :: length;



int main(){
  
    cube s;
    cube l;
    cube m;

    s.setData(1,2,3);
    l.setData(4,5,6);
    m.setData(7,8,9);
    cube :: updation();
   
    cout<<s.updation()<<endl;
    cout<<l.updation()<<endl;
    cout<<m.updation()<<endl;

    return 0;
}