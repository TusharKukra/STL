#include<iostream> 
#include<algorithm>
using namespace std;

int main(){

    int a,b;
    a=9;
    b=5;
    swap(a,b); //Swap function
    cout<<a<<","<<b<<endl;

    cout<<max(a,b)<<endl; //To print maximum of two numbers
    cout<<min(a,b)<<endl; //To print minimum of two numbers

    int arr[] = {1,2,3,4,5,6,7};

    reverse(arr,arr+4); //To print Reverse of the array (upto arr+n) here arr+4 means upto 4 elements
    
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    //here we also swap elements of the array
    // using swap(arr[0], arr[1]);

    cout<<endl;
    next_permutation(arr,arr+n);
    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
