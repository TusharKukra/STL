#include<bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<long long int> pq;
	int n,k;
	cin>>n>>k;
	while(n--){
		int q;
		cin>>q;
		if(q==1){
			long long int x,y;
			cin>>x>>y;
			long long int temp = x*x+y*y;
			if(pq.size()<k)
			pq.push(temp);
			else if(pq.top()>temp){
				pq.pop();
				pq.push(temp);
			}
		}
		else{
			cout<<pq.top()<<endl;
		}
	}
	return 0;
} 


// Not Efficient
