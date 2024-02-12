#include <iostream>
using namespace std;
 
 
int main(){
   
    int n=5;
    while(n>0){
        if(n=4){
            continue;
        }

        cout<<n<<endl;
        n--;
    }

    cout<<"He";

    return 0;
}