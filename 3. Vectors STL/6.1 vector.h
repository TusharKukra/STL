template <typename T>

// we use template in order to write any datatype we want not just (int) a specific datatype

class Vector{

 // Vector : Dynamic Array
    int cs; //current size of array
    int ms; // maximum size
    T *arr; //pointer that is pointing dynamic array
    // above all are private members


    public:
        Vector(){
            cs=0;
            ms=1;
            arr=new T[ms];
        }

        void push_back(const T d){
            if(cs==ms){
                //if array is full
                T *oldArr = arr;
                arr= new T[2*ms]; // points to new array (doubling size concept)
                ms= 2*ms;
                for(int i=0;i<cs;i++)
                {
                    arr[i]= oldArr[i];
                }
                //clear the old memory

                delete[] oldArr;
             }

             arr[cs]=d;
             cs++;

        }

        void pop_back(){
            cs--;

        }

        T front() const {   // here we write const bcz we are not modifying the data
            return arr[0];
        }

        T back() const {   // here we write const bcz we are not modifying the data
            return arr[cs-1];
        }

        bool empty() const {  // here we write const bcz we are not modifying the data
            return cs==0;
        }

        int capacity(){
            return ms;
        }

        T at(const int i){
            return arr[i]; // returning ith element 
        }
        
        int size() const {
            return cs;
        }

        //operator overloading

        T operator[] (const int i){
            return arr[i];
        }

        

};
