#include<bits/stdc++.h>
using namespace std;
bool mycmp(string a,string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n,mycmp);
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    }
	return 0;
}
