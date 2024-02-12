#include <iostream>
using namespace std;


class complexNo{
    
    private :
    int realpart;
    int complexpart;

    public :

    complexNo(int realpart , int complexpart){
        this -> realpart = realpart;
        this -> complexpart = complexpart;
    }

    void print(){
    cout<<this ->realpart<<" +"<<this ->complexpart<<"i"<<endl;
    }

    void plus(complexNo c2){
        realpart = realpart + c2.realpart;
        complexpart = complexpart + c2.complexpart;
    }

    void multiply(complexNo c2){
        
    }

};


int main(){
    
    complexNo c1(10,4);
    complexNo c2(4,3);
    
    int choice;
    cin>>choice;

    if(choice == 1){
        c1.plus(c2);
        c1.print();
    }

    else if(choice == 2){
        c1.multiply(c2);
        c1.print();
    }

    else{
        return 0;
    }

}


    