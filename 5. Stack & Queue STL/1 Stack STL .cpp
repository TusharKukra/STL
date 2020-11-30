#include<iostream>
#include<stack>  //header file for stack STL
using namespace std;

// Stack :  based on LIFO Principle

// push(d)  : to add data into stack
// pop : to delete data
// top : to see whats on the top of stack
// empty() : check if the stack is empty or not


int main(){

    stack<int> s;

    for(int i=0;i<=5;i++){
        s.push(i);
    }
    // numbers are going in order 0 -> 1 -> 2 -> 3 -> 4 -> 5
    // at the top : 5,4,3,2,1,0

    //loop

    while(!s.empty()){
        cout<<s.top()<<","; // it will print top element first
        s.pop();  // then it will delete the top element , and then 2nd element will become top most element and so on ...
    }
    return 0;   // hence the list will be printed in reverse order
}
