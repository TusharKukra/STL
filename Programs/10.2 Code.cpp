#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int m=0;
    int i=0;
    while(i<k)
    {
        if(a[m]<a[i])
        m=i;

        i++;
    }
    cout<<a[m]<<" ";
    int j=0;
    for(int i=k;i<n;i++,j++)
    {
        if(a[m]<=a[i])
        {
            m=i;
            cout<<a[m]<<" ";
            continue;
        }  
        else if(a[m]>a[i])
        {
            if(m>j)
            cout<<a[m]<<" ";

            else 
            {
                m=j+1;
                for(int x=j+1;x<=i;x++)
                {
                    if(a[x]>a[m])
                    {
                        m=x;
                    }
                }
                cout<<a[m]<<" ";
            }
        }
    }
    return 0;
}
