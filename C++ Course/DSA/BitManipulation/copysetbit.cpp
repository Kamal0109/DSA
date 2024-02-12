#include <iostream>
using namespace std;


int setSetBit(int x, int y, int l, int r){

   int mask=(1<<(r-l+1));
   mask--;
   mask=(mask<<(l-1));

   mask=x&mask;
   y=y|mask;

   return x;

}      
        

 
int main(){
  
    int x,y,l,r;
    cin>>x>>y>>l>>r;

    int sol=setSetBit(x,y,l,r);

    cout<<sol<<endl;
 
    return 0;
}