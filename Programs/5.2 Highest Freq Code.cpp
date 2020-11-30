#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin>>n;
  unordered_map<long long,long long> m;
  for(int i=0;i<n;i++)
  {
      long long x;
      cin>>x;
      m[x]++;
  }
   long long max_count=0;
   long long res=-1;
   for(auto itr:m)
   {
       if(max_count<=itr.second)
       {
           res=itr.first;
           max_count=itr.second;
       }
   }
   cout<<res<<endl;
}
