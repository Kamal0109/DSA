#include <bits/stdc++.h>
using namespace std;
 
 
int main(){


   // max heap 
   priority_queue<int>pq;

   pq.push(1);
   pq.push(4);
   pq.push(5);
   pq.push(3);
   cout<<pq.top()<<"  ";

   pq.pop();
   cout<<pq.top()<<"  ";
   


   // min heap 
   priority_queue<int,vector<int>> minheap;
   minheap.push(1);
   minheap.push(4);
   minheap.push(5);
   minheap.push(3);
 
    return 0;
}