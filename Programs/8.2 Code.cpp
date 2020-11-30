#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int nth;
    cin>>nth;
    while(nth--){
        int sum=0;
        int temp[100] = {0};
        bool test=true;
        int a[1000000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int no;
        cin>>no;
        sort(a,a+n); // Sort this so it will take less time
        for(int i=0;i<n;i++){
            for( int j=1+i;j<n;j++){    
                if(a[i] + a[j] == no){ 
                    if(test){
                        sum = a[j] - a[i];
                        test = false; 
                    }
                    int min = a[j] - a[i];
                    if(min <= sum){
                        sum = min;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for( int j=1+i;j<n;j++){    
                if(a[j] - a[i] == sum && a[i] + a[j] == no){
                    
                    cout<<"Deepak should buy roses whose prices are "<<a[i]<<" and "<<a[j]<<"."<<endl;
                    goto label;
                }
                // else if(a[j] - a[i] == sum && a[i] + a[j] == no && a[j] >= a[i]){
                //     cout<<"Deepak should buy roses whose prices are "<<a[j]<<" and "<<a[i]<<"."<<endl;
                // }
            }
        }
        label:;
    }
}
