#include <iostream>
#include <cmath>
using namespace std;


int binary(string str , int n){
    int sum = 0;
        
        for(int i = n ; i >= 0 ; i--){
            int x = pow(2,i);
            int y = pow(str[i],i-1);
            int d = x * y;
            sum = sum + d;
        }
        
        return sum;
}


int main(){
       
       string str = "100";
       int n = str.size();
       
    return 0;

}
