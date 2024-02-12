#include <iostream>
using namespace std;


int simpleParity(string &a){
    int len = a.length();
    int count = 0;
    for(int i = 0; i<len;i++){
        if(a[i] == '1'){
            count++;
        }
    }
    return count;
}


int main(){

    string a = "10010110";
    int k = simpleParity(a);
    if(k%2 == 0){
        a = a +"0";
    }
    else{
        a = a +"1";
    }

    cout<<a<<endl;    

    return 0;
}