#include <iostream>
#include <stack>
using namespace std;
int top = -1;

int main() {
    char a[10];
    cout<<"Give your expression"<<endl;
    cin.get(a , 4 );
    for(int i = 0; a[i] != "/0"; i ++){
        if(a[i] == '(' ){
            push(a[i]);
        }
        else if(a[i] == ")") {
            pop(a[i]);
        }
        else{
            break;
        }
        if(top == 0){
            cout<<"Valid Expression"<<endl;
        }
        else{
            cout<<"Invalid Expression"<<endl;
        }
    }
    return 0;
}