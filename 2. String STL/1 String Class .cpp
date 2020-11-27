#include<iostream> 
#include<string>
using namespace std;

   
int main(){

    // String Class : Adv of this is it provides you an alternate of Character array
    // instead of char a[100];
    // we can write string s; 
    string s = "TK";
    string s1("Hello");
    string s2("Hello Everyone");

    string s3(s2); // using copy constructor 
    // output of above will be same as string s2;

    string s4 = s3;
    char a[]= {'a','b','c','\0'};

    string s5(a);

    cout<<s<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    // to check whether a string is empty or not, use empty function
    if(s.empty()){
        cout<<"s is empty string";
    }

    // Append (to add another string at last of previous string with which you are appending)
    s1.append(" There !");
    cout<<s1<<endl;

    // Another method for append

    s1 = s1 + " Everyone !";
    cout<<s1<<endl;

    // to clear everything (to erase)
    cout<<"length of s1: "<<s1.length()<<endl;
    s1.clear();
    cout<<"length of s1 after using clear() function: "<<s1.length()<<endl;

    // Compare two strings
    s="Google";
    s1="Apple";
    cout<<s.compare(s1)<<endl; // it returns an integer value which is either = 0, >0, <0
    // the above operation will return a positive number (lexicographically manner (according to dictionary), i.e Google is greater than Apple)
    // if we use s1.compare(s); then it will return negative value 
    // if we compare same strings then it will return 0 
    
    cout<<s5[0]<<endl; // to print ith character of a string
    
    // to find (index of) a substring
    string d= "I love coding !!!";
    int index = d.find("coding");
    cout<<index<<endl;

    
    // Remove a word from the string
    string word = "coding";
    int length = word.length();
    d.erase(index,length); // it will remove from index (which is 7) till the length of the word 
    cout<<d<<endl;

    
    return 0;
}
