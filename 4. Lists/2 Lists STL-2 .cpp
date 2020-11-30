#include<iostream>
#include<list> //header file for List
using namespace std;

// List: Like a doubly linked list, where each element is connected to previous & next element.
// it is useful when it comes to insertion / deletion from front, middle 
// operations: .push_back(value)
// .push_front(value)
// .pop_back
// .pop_front
// .insert
// .erase(index)
// .remove(2)  // i.e remove all occurences of 2

int main(){

    list<int> l;
    
    //init
    list<int> li {1,2,3,4,5,6};

    //Of Different Data-types:
    list<string> l2 {"apple", "guava", "mango", "banana"};
    l2.push_back("watermelon");

    //iterate over the list and print the data
    for(auto s:l2){
        cout<<s<<" --> ";
    }
    
    cout<<endl;

    //sorting
    l2.sort(); // sort in lexicographic way


    //reverse
    l2.reverse(); // reverse the current order of the list


    //pop front
    l2.pop_front(); // remove the first element

    //and all the above mentioned basic operations.....


    //iterate using iteraters (start to end)
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<"-->";
    }

    cout<<endl;

    for(auto s:l2){
        cout<<s<<" --> ";
    }

    cout<<endl;
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // List STL-2
    // Some more functions in the list

    l2.push_back("orange");
    l2.push_back("kiwi");

    for(auto s:l2){
        cout<<s<<"--->";
    }

    cout<<endl;

    // remove a fruit: 

    string f;
    cin>>f;
    l2.remove(f);
    for(string s:l2){
        cout<<s<<"->";
    }
    
    // erase one or more elements:

    //auto it = l2.begin() + 3 ; // this only works with vector not with Lists (i.e l2[i] does not work , direct jump not work).
    // so we have to do like this: 

    auto it = l2.begin();
    it++;
    it++;

    l2.erase(it);

    for(string s:l2){
        cout<<s<<"--->";
    }

    cout<<endl;

    // we can insert element into the list

    it= l2.begin();
    it++;
    l2.insert(it,"Juice");  //here 1st parameter is : position & 2nd parameter is : Value.

    for(string s:l2){
        cout<<s<<"--->";
    }


    return 0;
}
