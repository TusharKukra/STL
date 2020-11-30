#include<iostream>
#include<list> //header file for List
using namespace std;

// List is also used in : IMPLEMENTATION OF GRAPH

// Suppose we have a graph : 
// it has vertices and edges , so we have to return : 
// edge name = (connected to which edge, distance/length b/w them), ...

// we can do this using: Array of Lists
// It can be Static or Dynamic

//  list<> l;
//  list<> l[100];  // this is list array

int main(){

    list<pair<int,int>> *l;   // here we use *l bcoz we need Dynamic List
    // here l is an pointer to an array of linked list (created below as [n])
    int n;
    cin>>n;

    l = new list<pair<int,int>> [n];

    int e; // for number of edges
    cin>>e;

    for(int i=0;i<e;i++){
        int x,y,wt;  //x=1st edge , y= another edge connected to x & wt= length/distance/weight
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));




    }

    // print the linked lists

    for(int i=0;i<n;i++){
        //print every linked list
        cout<<"Linked List: "<<i<<" -> ";
        for(auto xp:l[i]){
            cout<<"("<<xp.first<<","<<xp.second<<")";
        }

        cout<<endl;
    }



    return 0;
}



// Custom Input:
// 3 3
// 0 1 4
// 0 2 3
// 1 2 4
