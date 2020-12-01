#include<bits/stdc++.h>
using namespace std;
int Getmin(int distance[],bool sptSet[],int V)
{
int min=INT_MAX;
int index=-1;
for(int i=1;i<=V;i++)
{
    if(distance[i]<=min&&sptSet[i]==false)
   {
     min=distance[i];
     index=i;
   } 
}

return index;
}
void dijkstra(vector<pair<int,int>> adj[],int s,int V)
{
    bool sptSet[500];
int distance[500];
for(int i=1;i<=V;i++)
{
    distance[i]=INT_MAX;
    sptSet[i]=false;
}
distance[s]=0;
for(int i=1;i<=V;i++)
{
int u=Getmin(distance,sptSet,V);
sptSet[u]=true;
int len=adj[u].size();
for(int j=0;j<len;j++)
{
    if(!sptSet[adj[u][j].first]&&distance[adj[u][j].first]>distance[u]+adj[u][j].second)
    distance[adj[u][j].first]=distance[u]+adj[u][j].second;
    
}


}
for(int i=1;i<=V;i++)
{
    if(distance[i]<0 || distance[i]==INT_MAX)
    distance[i]=-1;
    if(i!=s)
    cout<<distance[i]<<" ";
}
cout<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n,m;
cin>>n>>m;
vector<pair<int,int>> adj[500];
for(int i=0;i<m;i++)
{
int x,y,r;
cin>>x>>y>>r;
adj[x].push_back(make_pair(y,r));
adj[y].push_back(make_pair(x,r));
}
int s;
cin>>s;
dijkstra(adj,s,n);

}
return 0;
}
