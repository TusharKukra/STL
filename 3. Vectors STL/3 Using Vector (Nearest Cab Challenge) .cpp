#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compareDistance(pair<int,int> p1, pair<int,int> p2)
{
    int d1 = p1.first * p1.first + p1.second * p1.second;  // x^2 + y^2 : distance from origin
    int d2 = p2.first * p2.first + p2.second * p2.second;

    // if d1 = d2 then sort according to: which have smaller x-coordinate.
    if(d1==d2){
        return p1.first<p2.first;
    } 
    return d1 < d2;
}

int main(){

   // Nearest Cab Problem:
   // You were given coordinates of the Cab, then you have to store those values into Vector
   // then sort them according to their distance 
   // and return the nearest cab
   
   // for storing there are two ways :
   // first is through Vectors: vector<pair<int,int>> cab (for storing x,y coordinates of the Cab)
   // another one is by using Class
   // class[ Name;, 
   //         x; 
   //         y;]

    // in this we are using Vector

    int n;
    cin>>n;

    vector<pair<int, int>> car;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        car.push_back(make_pair(x,y));
    }

    sort(car.begin(), car.end(), compareDistance);  // here we sort according to the least distance from the origin , so we use Comparator function

    // for each loop
    cout<<"Sorted Order of Cars near you : "<<endl;
    for(auto p:car){
        cout<<"Car: "<<p.first<<","<<p.second<<endl;
    }

    

    return 0;
}

   
   
