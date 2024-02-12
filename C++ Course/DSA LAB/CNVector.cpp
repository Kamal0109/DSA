#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;  

    v[3] = 100;
    cout<<"Size : "<<v.size()<<endl;
    cout<<v[1]<<endl; 
    cout<<v.at(2)<<endl;
    


    return 0;
}