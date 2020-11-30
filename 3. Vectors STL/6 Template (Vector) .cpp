// here we make template , so that we can write vector in any data type (not just stick to a particular data type as in privious example)

#include<iostream>
#include"vector.h" // when we have custom header file we use double quotes
using namespace std;

// Container Design (Creating a custom header file)
// vector.h

int main(){
    Vector <int> v; // here just write the data type (and template will handle everything)

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    v.push_back(6);
    v.push_back(7);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Capacity: "<<v.capacity();

    return 0;
}
