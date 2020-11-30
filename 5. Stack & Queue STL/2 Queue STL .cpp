#include<iostream>
#include<queue>  //header file for queue STL
using namespace std;

// Queue: FIFO Data Structure
// eg. Whatsapp server: messages are in a queue
// used to maintain order
// important methods/functions:   push, pop, front, empty

int main(){

    queue <int> q;
    
    for(int i=1;i<=5;i++){

        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front()<<" <- ";   // in stack we have top() but in queue we have front().
        q.pop();
    }
    // this will print elements in increasing order: 1,2,3,4,5 
    // bcz according to FIFO Principle : 1 goes first and also comes out first
    // so when we call q.front(); it will return 1 and then we pop it and then 2 comes out ... so-on

    return 0;
}
