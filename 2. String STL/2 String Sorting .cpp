#include<iostream> 
#include<algorithm>
#include<string>
using namespace std;

   bool compare(string a, string b)
   {
       if(a.length()==b.length())
       {
           return a<b;  // i.e if the length is same then 2nd string comes before 1st string
       }

       return a.length()>b.length();  // if length of both strings are not same then 1st string comes before 2nd one
   }

int main(){

    int n;
    cin>>n;

    cin.get();
    string s[100];  // Creating an array of string

    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]); // for taking input as string we cannot use cin function 
    }
    
    // Now apply Sorting Method
    sort(s,s+n,compare); // It will sort the strings lexicographically (i.e alphabetically)

    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    
    // If we want to compare strings not according to lexicographically but on the basis of length
    // then create comparator function on the top 
    // and then pass the compare function in out sort method 

    return 0;
}
