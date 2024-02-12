#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;


int main(){

int data[100],m,r=0;
cout<<"Enter the length of data bits:-";
cin>>m;


cout<<"Enter the data bits:-";
for(int i=0;i<m;i++){
    cin>>data[i];
}

cout<<endl;


while(pow(2,r)<=m+r+1){
    r++;
}


int hamming[m+r],j=0,k=1;


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
              if (hamming[x] == 1)
                  parity = parity + 1; // counting number of 1's
          }
          j = x + i;
          min = 1;
      }
      
      
      if (parity % 2 == 0){ 
         hamming[i] = 0;
      }
      else{
        hamming[i] = 1;
      }
  }
    
cout<<"Hamming code will be: ";
for(int i = 1; i < m + r; i++){
cout<<hamming[i]<<" ";
}
cout<<endl;

int hamming1[m+r];

cout<<"Enter Hamming code at receiver side=";
for(int i=0;i<m+r;i++){
    cin>>hamming1[i];
}

int flag=0;
for(int i=0;i<m+r;i++){
    if(hamming[i]!=hamming1[i]) flag=1; 
}

if(flag==0) cout<<"NO ERROR"<<endl;
else{
    
}
return 0;
}