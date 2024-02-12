#include <iostream>
using namespace std;
 
class set{
    int a[4];
    public:
    void seta(){
        for(int i=0;i<4;i++){
        cin>>a[i];
        }
    } 
    void getArray(int a[]){
        for(int i =0 ; i<9; i++){
            cout<<a[i];
        }
    }         
    set operator +(set s){
        set combine[9];
        for(int i=0; i<4; i++){
            for(int j=0; j<5; j++){
                int k=0;
                if(a[i]<s.a[j] && a[i] != s.a[j]){
                    combine[k] = a[i];
                }
                else if(a[i] > s.a[j] && a[i] != s.a[]){
                    combine[k] = s.a[j];
                }
                else if(a[i] == s.a[j]){
                    combine[k] = a[i];
                }
                k++;
            }
        }    
    } 

};

int main(){
 
    set s1;
    s1.seta();

    set s2;
    s2.setb();

    set s3;
    s3.setb();

    s3 = s1 + s2;
    s3.geta();

    return 0;
}