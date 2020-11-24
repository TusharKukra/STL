#include<iostream> 
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 110;
    //For searching an element use ---> find()
    
    auto it = find(arr,arr+n,key);
    //cout<<it<<endl;

    int index = it-arr;
    if(index==n){
        cout<<key<<" not present in the array"<<endl;
    }
    else{
            cout<<"The given key value is present at "<<index<<endl;
    }
    return 0;
}

//If we print the variable where our find() value 
// is stored then it will print only the address
// so int order to print the actual index of the Key value
// subtract the 'it' variable (which is a pointer value) to the 
// arr (pointer value of the first element)
// thats why we use index = ir - arr;
// if you search for key value which is not present then
// it will show you output = last index + 1 
// So, for checking the key value use conditional statements
