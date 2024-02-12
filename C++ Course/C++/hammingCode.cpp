#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int r = 3;
    int m = 4;
    int arr[20] = {1,1,1,1,0,1,1};
    while(pow(2,r)<=m+r+1){
    r++;
    }
    int hamming[m+r];
    int j=0;
    int k=1;
    for(int i = 1; i <= m + r; i++){
        if( i == pow( 2, j )){
            hamming[i] = -1;
            j++;
        }
        else{
            hamming[i] = data[k];
            k++;
        }
    }
    k=0;
    for (int i = 1; i <= m + r; i = pow (2, k)){
        k++;
        int parity = 0;
        j = i;
        int x = i;
        int min = 1;
        int max = i;
        while ( j <= m + r){
            for (x = j; max >= min && x <= m + r; min++, x++){
                if (hamming[x] == 1){
                  parity = parity + 1;
                } // counting number of 1's
            }
            j = x + i;
            min = 1;
        }    
    }
    

    return 0;
}