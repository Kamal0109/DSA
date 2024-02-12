#include <iostream>
using namespace std;


bool isPrime(int N){
        if(N<2){
            return false;
        }
        int i=2;
        while(i<=N){
            if(N%i==0){
                return false;
            }
            i++;
        }
        return true;
        
    }
    
    int countPrimes(int L, int R) {
        // code here
        int count=0;
        for(int i=L;i<=R;i++){
            if(isPrime(i)){
                count++;
            }
        return count;
         
    }
    }    

 
int main(){

    int L,R;
    cin>>L>>R;
    countPrime(L,R); 
   

    return 0;
}