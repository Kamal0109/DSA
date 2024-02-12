#include <bits/stdc++.h>
using namespace std;


void update(int *p){
    *p = *p + 1;
}


int main() {

	int a = 5;
    int * p = &a;
    
    cout<<"Before  "<<*p<<endl;;
	update(p);
	cout<<"After  "<<*p;
  
	return 0;
}
