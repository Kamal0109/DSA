#include <iostream>
using namespace std;
int main() {
    int num1 {55};
    int num2 {60};
    bool result = (num1 < num2);
    cout<<boolalpha<<result<<endl;
    
    if(result==true){
        cout<<num1<<" is less than "<<num2<<endl;
    }
    else{
        cout<<num1<<" is more than"<<num2<<endl;
    }

    return 0;
}
