#include<iostream> 
#include<algorithm>
using namespace std;
//Doing Bubble Sort using Comparator Function

//Passing a function in the parameter of another function
    bool compare(int a, int b)
    {
        cout<<"Comparing "<<a<<" and "<<b<<endl;
        return a>b;
    }

    void bubble_sort(int a[], int n, bool (&cmp)(int a,int b)){
        
        // N-1 large elements to the end
        for(int i = 1; i<=n-1 ; i++)
        {
            //Pairwise swapping in the unsorted part of the array
            for(int j =0; j<= (n-i-1); j++)
            {
                if(cmp(a[j],a[j+1]))
                {
                    swap(a[j],a[j+1]);
                }
            }
        }
    }
int main(){

    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}

    bubble_sort(a,n,compare);
    for(int i=0;i<n;i++){cout<<a[i]<<",";}
    return 0;
}
