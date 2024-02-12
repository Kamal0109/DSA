#include <iostream>
using namespace std;

int main() {

    cout<<" nesting if statement "<<endl;
    bool red = false;
    bool yellow = false;
    bool green = true;
    bool police_stop = true;

    if(red){
        cout<<"stop "<<endl;
    }

    if(yellow){
        cout<<" Ready "<<endl;
    }

    if(green){
        if(police_stop){
            cout<<"Stop "<<endl;
        }
        else{
        
            cout<<"Go "<<endl;
        }
       
    }

    return 0;
}