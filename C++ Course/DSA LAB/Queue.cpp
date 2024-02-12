#include <iostream>
using namespace std;
static int top = -1;
static int bottom = 0;

void enqueue(int input[]){
    if(top > 10){
        cout<<"overflow"<<endl;
        return ; 
    }
    top ++;
    cout<<"enter the no"<<endl;
    cin>>input[top];
    return;
}

void dequeue(int input[]){
    if(bottom > top){
    cout<<"Underflow"<<endl;
    return ; 
    }
    bottom ++;
}

void display(int input[]){
    for(int i = bottom; i <= top ; i ++ ){
        cout<<input[i];
    }
    return ;
}

int main(){
   int input[10];
   int n;
   while(n != 0){
   cout<<"Press 1 to enqueue "<<endl;
   cout<<"Press 2 to dequeue "<<endl;
   cout<<"Press 3 to display "<<endl;
   cout<<"Press 0 to exit "<<endl;
   cin>>n;
   switch (n)
   {
   case 1:
    {
        enqueue(input);
    break;
    }
   case 2 :
   {
     dequeue(input);
     break;
   }
   case 3 :
   {
    display(input);
    break;
   }
   }
   }
}