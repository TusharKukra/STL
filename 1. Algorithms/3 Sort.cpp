#include<iostream> 
#include<algorithm>
using namespace std;

    bool compareIncreasing(int a, int b)
    {
        return a<b;
    }

    bool compareDecreasing(int a, int b)
    {
        return a>b;
    }
    
int main(){

    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //when we use sort() function then its domain is [starting, end) 
    sort(a,a+n,compareIncreasing);
    cout<<"In increasing Order: ";
    for(int i =0 ;i<n;i++)
    {
        cout<<a[i]<<",";
    }
        cout<<endl;

    sort(a,a+n,compareDecreasing);
    cout<<"In decreasing Order: ";
    for(int i =0 ;i<n;i++)
    {
        cout<<a[i]<<",";
    }


    // Not only in Increasing Order , we can sort the given array in Decreasing Order
    // By using Comparator Function (define it in the starting of the program, before main function!!)
    // And when we use Comparator function then write: sort(starting,end,comparatorFunctionName)
    return 0;
}
