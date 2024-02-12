// Sum of digit of a number 1247, 1+2+4+7
#include <iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int sum = 0;
    while(n>0){
         int last_digit = n%10;
         sum = sum + last_digit;
         n = n /10;
    }
     cout<<"The sum is :"<<sum<<endl;
      return 0;
}