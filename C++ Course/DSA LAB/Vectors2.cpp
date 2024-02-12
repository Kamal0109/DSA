#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int> num;
    // To copy vector 
    vector<int> last(num);


    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    
    //Capacity will tell us about the total length of vector created
    cout<<num.capacity()<<endl;

    //size will tell us about the length used
    cout<<num.size()<<endl;;

    // Element at 2 
    cout<<num.at(2)<<endl;  

    //For first element we will use front and for last we will use back 
    cout<<num.front()<<endl;
    cout<<num.back()<<endl;

    // to print the elements of the vector
    for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;


    // For deleting the element in the vector pop_back is used
    num.pop_back(); 
    for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;

    // For deleting the vector completely  it will give our size 0
    num.clear();
    for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;

}