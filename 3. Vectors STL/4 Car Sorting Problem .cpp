// This ques is same as previous but there's a little change 
// earlier we have only x,y-coordinates of the Car
// now we have 3 parameters : Name, x-coordinate, y-coordinate


#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;


class Car{

    public:
    string car_name;
    int x,y;
    Car(){

    }
    Car(string n, int x, int y){
        car_name = n;
        this-> x;
        this-> y;
    }

    int dist(){
        return x*x + y*y; // returns distance from origin
    }

};

bool compareDistance(Car A, Car B)
{
    int d1 =A.dist();  // x^2 + y^2 : distance from origin
    int d2 = B.dist();

    // if d1 = d2 then sort according to: which have smaller x-coordinate.
    if(d1==d2){
        return A.car_name.length()< B.car_name.length();
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

    vector<Car> car;

    for(int i=0;i<n;i++)
    {
        int x,y;
        string name;
        cin>>name>>x>>y;
        Car temp(name,x,y);
        car.push_back(temp);
    }

    sort(car.begin(), car.end(), compareDistance);  // here we sort according to the least distance from the origin , so we use Comparator function

    // for each loop
    cout<<"Sorted Order of Cars near you : "<<endl;
    for(auto p:car){
        cout<<"Car Name: "<<car.car_name<<","<<car.dist()<<"Location: "<<car.x<<","<<car.y<<endl;
    }

    

    return 0;
}

   
   

