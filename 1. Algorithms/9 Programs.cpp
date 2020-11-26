#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;

   
int main(){


vector< int > data = {100, 142, 138, 96, 32, 149};
swap(data[2],data[5]);
int val1 = *max_element(data.begin(), data.begin() +3); // this will take [begin, 3rd Position]
int val2 = *max_element(data.begin()+3,data.end()); // this will take (3rd Position-not included, end]
cout<< min(val1, val2);
  
    return 0;
}
