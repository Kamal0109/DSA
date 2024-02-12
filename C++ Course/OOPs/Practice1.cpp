#include <bits/stdc++.h>
using namespace std;



int main(){

    int t;
   cin>>t;
   while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     
     int y = b - a + 1;
     int z = d - c + 1;

     int l[y];
     int m[z];

     for(int i = 0; i < y; i++){
        l[i] = a;
        a++;
     }

     for(int i = 0; i < z; i++){
        m[i] = c;
        c++;
     }
    
    int count = y;
    int app = 0;

    for(int i = 0; i < z;i++){
        for(int j = 0; j< y;j++){
            if(m[i] != l[j]){
                app = app + 1;
            }
        }
        if(app == y){
            count = count + 1;
        }
    }

    cout<<count<<endl;
    
    
    }  

    return 0;
}


