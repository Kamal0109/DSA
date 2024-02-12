#include <iostream>
using namespace std;


class fraction{
    private :
    int numerator;
    int denominator;

    public :
    
    fraction(int numerator , int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    void print(){       
        // here we can write without this
        cout<<this->numerator<<" / "<<this->denominator<<endl;
    }

    void simplify(){
        int gcd = 1;
        int j = min(this -> numerator , this -> denominator);
        for(int i = 0; i <= j ; i++){
            if(this -> numerator % i == 0 && this -> denominator % i == 0){
                gcd = i;
            }
            this -> numerator = numerator / gcd;
            this -> denominator = denominator / gcd;
        }
    }     

    void add(fraction f2){
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = (x * numerator) + (y * f2.numerator);

        numerator = num;
        denominator = lcm;

        simplify();
    }
}; 


int main(){
    fraction f1(10,2);
    fraction f2(15,5);

    f1.add(f2);
    f2.print();

    return 0;
}