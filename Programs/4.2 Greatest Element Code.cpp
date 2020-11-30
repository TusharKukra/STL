#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        int flag = 0;
        int j = (i+1)%n;
        while(j != i){
            if(a[j]>a[i]){
                flag = 1;
                cout<<a[j]<<" ";
                break;
            }
            j++;
            j = j%n;
        }
        if(flag == 0){
            cout<<-1<<" ";
        }
    }
    
    return 0;
}
