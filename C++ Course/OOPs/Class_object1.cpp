#include <bits/stdc++.h>
using namespace std;


class cube{
   
    private :
    int length;
    int breadth;
    int height;

    protected :
    int Surface_Area;

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
    cout<<"getData is called"<<endl;;
}



class child : public cube{

    protected :

    void setSurfaceArea(int d){
        
        cout<<"SetSurfaceArea is called"<<endl;

        Surface_Area = d;

    }

   public :


    void displaySurfaceArea(){

        setSurfaceArea(55);

        cout<<Surface_Area<<endl;

    }

};


int main(){
  
    cube c;
    c.area1(2,5);

    c.setData(1,2,3);
    c.print();
 
    c.getData();

    child f;
    
    
    f.displaySurfaceArea();

    return 0;
}