#include<iostream> 
#include<algorithm>
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
    return 0;
}
