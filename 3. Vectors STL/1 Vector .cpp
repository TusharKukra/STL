#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    // Vector: is an dynamic array, that grow & shrink in size (upto certain limit)
    
    //Different ways to defining a Vector
    vector<int> a;
    vector<int> b(5,10); // i.e there are 5 integers in array with value 10 : (number of elements, value)
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5};


    //how we can iterate over vector

    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<",";
    }
    cout<<endl;

    //another way

    for(auto it = b.begin(); it!=b.end();it++)
    {
        cout<<(*it)<<",";
    }
     cout<<endl;

    // another way: for each loop
    for(int x:d){
        cout<<x<<",";
    }


    //More functions
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no); //Adding element to the end of the vector
        // Doubling of memory is an expensive operation 
        // Doubling means : when we add an element it also create an empty space 
    }
    for(int x:v){
        cout<<x<<",";
    }

    //Understanding how at memory level what is the diff b/w vector d & v
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //size of underlying array
    cout<<v.max_size()<<endl; // max no of elements a vector can hold in the worst case according to available memory in the system
    
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl; //size of underlying array
    cout<<d.max_size()<<endl; // max no of elements a vector can hold in the worst case according to available memory in the system
    
    return 0;
}

   
   
