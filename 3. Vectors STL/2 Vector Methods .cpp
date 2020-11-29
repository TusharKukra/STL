#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

   //creating & initializing a Vector

   vector<int> d{1,2,3,10,14};
   d.push_back(16); // T.C for push back is O(1) most of the time
   
   d.pop_back(); //this will remove the last element O(1)
   
   // to insert some elements in the middle of the vector
   
   d.insert(d.begin()+ 3, 100); // this means we are adding at 3rd position from beginning and value of element is 100
   d.insert(d.begin()+ 3,4, 101);   // here 4 is the number of elements we have to add & all the 4 elements have value 100 
   // T.C of this operation : O(N)


    //to erase particular element:
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5); // to erase number of elements

    //to check the size 
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    // to make better implementation : we avoid the shrink
    d.resize(8); // may or maynot change the size of the array : if the size is increasing then more memory will be allocated 
    cout<<d.capacity()<<endl;

    // remove all the elements from vectors (** BUT DOESNOT DELETE THE MEMORY OCCUPIED BY THE ARRAY)
    d.clear();

    //empty
    if(d.empty()){
        cout<<"Vector is empty";
    }
    cout<<endl;
    cout<<d.size()<<endl;

   for(int x:d){
       cout<<x<<",";
   }
    cout<<endl;
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    // to print front (first) element: 
    cout<<d.front()<<endl;
    // to print last element:
    cout<<d.back()<<endl;

    //Reserve Method:
    int n;
    cin>>n;
    vector<int> v;

    v.reserve(1000); // here 1000 values are reserve (i.e max capacity is 1000 everytime (in all pushbacks))

    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing Capacity: "<<v.capacity()<<endl; // just to see how capacity changes after every push back operation
    }
    cout<<"Capacity: "<<v.capacity()<<endl;
    // this is doubling: and it is an expensive process
    for(int x:v)
    {
        cout<<x<<",";
    }
    // now when we see the output , we have doubling: i.e capacity doubles after every push back 
    // so to prevent doubling : use "reserve" keyword after initializing vector

    return 0;
}

   
   
