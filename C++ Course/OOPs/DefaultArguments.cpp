// function overloading
// kamal Kumar Tiwari
// 23/2/2

// print area of shapes
// parameter: default values to height, shape
#include <iostream>
using namespace std;


float area(int base, int height = 0, char shape = 'c'){
         
    switch(shape){
   
      case 'c':
      {
        cout<<3.14*(base*base)<<endl;
        break;
      }

      case 't':
      {
        cout<<(.5)*(base*height)<<endl;
        break;
      }

    }
}


int main(){
 
    area(1,1,'t');


    return 0;
}