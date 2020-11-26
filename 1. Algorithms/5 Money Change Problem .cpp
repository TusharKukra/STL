#include<iostream> 
#include<algorithm>
using namespace std;

// Indian Money Change Problem
// In this problem we have given some amount (money) and we have 
// to find out way to make the change using minimum number of coin
bool compare (int a, int b)
{
    return a<=b;
}
int main (){
int coins[] = {1,2,5,10,20,50,100,200,500,2000};
int n = sizeof(coins)/sizeof(int);
int money =168;

// first lookup to coin which shows highest value which is less than or equal to amount given (money)
// eg. 168 - 100 = 68 (here 100 is the highest coin value which is less then given money)
// then again lookup 
// 68 - 50 = 18 
// 18 - 10 = 8
// 8 - 5 = 3
// 3 - 2 = 1
// 1 - 1 = 0

// We can use Linear / Binary Search (here we use Binary Search bcoz array is sorted)

// So for getting value of coin which is less than equal to given money
// Hence, we use Lower bound (which gives greater than equal to) but in this function
// we also add Comparator so that we can reverse the comparision

while(money>0){
int lb = lower_bound(coins, coins+n, money, compare) - coins -1;
//cout<<lb<<" value "<<coins[lb];
int m = coins[lb];
cout<<m<<",";
money-=m;
}
return 0;

}
