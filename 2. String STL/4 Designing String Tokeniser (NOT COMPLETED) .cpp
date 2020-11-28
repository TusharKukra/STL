#include<iostream> 

using namespace std;

   
   char *myStrtok (char *str, char delim)
   {
       // String / single Char act as a delimiter
       static char *input = NULL; // initially input pointer contains nothing
       // but when we use this function it will store every token in it one by one.

    if(str!=NULL)
    {
        // making the first call
        input = str; // store first string into input

    }

        // start extracting tokens and store them in an array
       // Create a dynamic array

       char *output = new char[strlen(input)+1];  // here we do +1 for the null character
       int i = 0;
       for(;input[i]!=NULL;i++)
       {
           if(input[i]!=delim){
                output[i]==input[i];           
            }
            else{
                output[i] = "\0";
                input = input + i+1;
                return output;
            }

       } 

   }

int main(){

    // Creating our own Tokeniser (this time we are not using STL)
    // So in order to create myStrtok() 
    // First we need to store the string value inside the function
    // To store something inside a function we can use Array (static/dynamic)
    // Here we use Dynamic Array
    // And we also need another Variable to check , how many tokens are read so far (or how many tokens you return till now)
    // and how many more to come.

    char s[100] = "Today is Saturday";
   
    char *ptr = myStrtok(s," ");
    cout<<ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr=myStrtok(NULL," ");
        cout<<ptr<<endl;
    }
    
    
    return 0;
}
