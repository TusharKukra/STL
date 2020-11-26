#include<iostream> 
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {20,30,40,40,50,100,1100};  //In binary search we use SORTED array
    int n = sizeof(arr)/sizeof(arr[0]);

    //Doing Binary Search in a sorted array

    int key;
    cin>>key;

    //here we use bool function binary_search(arr,arr+n,key)

    bool presentOrNot = binary_search(arr,arr+n,key);
    if(presentOrNot){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }


    // Getting the index of the element
    // And lower_bound(start,end,key) and upper_bound(start,end,key)

    auto it = lower_bound(arr,arr+n,40); // returns the first element >= key (greater than equal to)
    cout<<"Lower Bound of 40 is "<<(it-arr)<<endl;
    //lower_bound returns the address of the bucket and if we use (it-arr)
    // then it gives index of the value

    auto ut = upper_bound(arr,arr+n,40); // returns the first value which is > key (strictly greater than)
    cout<<"Upper Bound of 40 is "<<(ut-arr)<<endl;

    //From these Lower & Upper Bound we can find the Frequency/Occurence of the Key Value

    cout<<"Occurence / Frequency of 40 is "<<(ut-it)<<endl;
    return 0;
}
