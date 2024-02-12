#include <iostream>
using namespace std;


class fraction{
    private :
    int numerator;
    int denominator;

    public :

    fraction(){

    }

    
    fraction(int numerator , int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }


    int getNumerator() const{
        return numerator;
    }


    int getDenominator() const{
        return denominator;
    }


    void setNumerator(int n){
        numerator = n;
    } 


    void setDenominator(int d){
        denominator = d;
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
    fraction f2(15,4);


    // you acn only call const fun for const variable
    fraction const f3;
    cout<<f3.getNumerator()<<"  ";
    cout<<f3.getDenominator();

    return 0;
}