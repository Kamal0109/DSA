#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int a[5] = {1,2,5,4,0};
    int b[5] = {2,4,5,0,1};

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int count = 0;

    for(int i = 0; i < 5; i++){
        if(a[i] == b[i]){
            count = count + 1;
        }
    }

    if(count == 5){
        cout<<"1"<<endl;
    }

    else{
        cout<<"0"<<endl;
    }

    return 0;
}