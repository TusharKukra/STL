#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    // Rotate method (rotating a container)

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    // Now for rotating from middle element

    rotate (arr,arr+2, arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Applying on vector
    vector<int> v = {1,2,3 }; // Vector is an Dynamic Array
    rotate(v.begin(), v.begin()+3, v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    // Next Permutation for vector
    next_permutation ( v.begin(),v.end());
    // If you want more permutation then again write the above statement 
    // next_permutation ( v.begin(),v.end());  like this
    cout<<endl;
    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}
