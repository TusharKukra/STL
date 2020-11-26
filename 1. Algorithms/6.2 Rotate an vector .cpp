#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;

int main(){
// Applying on vector
    vector<int> v = {10,20,30,40,50}; // Vector is an Dynamic Array
    rotate(v.begin(), v.begin()+3, v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
