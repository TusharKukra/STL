#include<iostream> 
#include<algorithm>
using namespace std;

int main(){

    // Creating a pair
    // Pair : container that binds two values as a single entity
    pair<int,char> p;
    p.first = 30;
    p.second = 'T';

    // Another way (by calling existing pair into new pair)
    pair<int, char> p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<int, string> p3 = make_pair(15, "India");
    cout<<p3.first<<" "<<p3.second<<endl;


    // Taking input
    int a,b;
    cin>>a>>b;

    pair<int,int> p4 = make_pair(a,b);

    //Array / Vector of Pair

    pair<pair<int,int>, string> c;
    c.second = "Coding";
    c.first.first = 15;
    c.first.second = 19;

    cout<<c.first.first<<" "<<c.first.second<<" "<<c.second<<endl;
    return 0;
}
