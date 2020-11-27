#include<iostream> 
#include<cstring>
using namespace std;

   

int main(){

    // Tokenization of a String
    // char *strtok(char *s, char *delimiters);
    // returns a token in each subsequent call
    // on the first call function should be passed with string argument for 's'
    // on subsequent calls we should pass the string argument as null
    
    char s[100] = "Today is Saturday";
    // delimiters can be anything in which you want to break the string
    // here in this case delimiter is SPACE

    char *ptr = strtok(s, " ");
    cout<<ptr<<endl;
    // This above function creates a new array where it copies first token and returns the address of new array
    
    //ptr= strtok(s, " ");
    //cout<<ptr<<endl;

    // To get next token : pass the string argument as NULL (instead of string variable name)

    // ptr= strtok(NULL, " ");
    // cout<<ptr<<endl;

    // To return all the tokens : use Loop

    while(ptr!=NULL)
    {
        ptr= strtok(NULL, " ");
    cout<<ptr<<endl;
    }
    
    return 0;
}
