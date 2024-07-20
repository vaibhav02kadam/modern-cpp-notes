#include<iostream>

using namespace std;

template<typename T>
class sharedptr{

    private:
        T *res;
        /* 
        int counter;

        1. If we great just create int counter everytime a resource is allocated we will
        create another instance of it as number of allocated resources increase. 
        2. We need a single counter to be incremented/decremented when multiple resources are allocated
        3. If we use static int counter it become particular to class, but it should be per resource
            - If I want shared_ptr 3 to point to new resource it will still count 3 instead of 4
        
        If we use int* the counter ptr will be increased like (*counter)++ in the heap memory
        */
       int *counter;

       void incrementcounter(){
            // defensive programming checking if it exits
            if(counter) {
                (*counter)++;
            }
       }

       void decrementcounter(){
            if(counter){
                (*counter)--;
                if((*counter) == 0){
                    if(res){
                        delete res;
                        delete counter;
                        res = nullptr;
                        counter = nullptr;
                    }
                }
            }
            
       }


    public: 

        /*
        Default ctor and Param ctor
        */
        sharedptr(T* ptr = nullptr) : res(ptr), counter(new int(1)){
            cout<<" ctor was called \n";
        }

        sharedptr<T>(const sharedptr<T>& ptr){
            res = ptr.res;
            counter = ptr.counter;
            incrementcounter();
        }

        sharedptr<T>& operator = (const sharedptr<T>& ptr){
            
        }

};


int main()
{

    /*

    sharedptr<int> ptr1;  // default ctor
    sharedptr<int> ptr2(new int(10)); // param ctor
    sharedptr<int> ptr3(ptr2); // copy ctor
    ptr3 = ptr2; // copy assignment operator
    sharedptr<int> ptr4(std::move(ptr1)); // move copy ctor
    ptr2 = std::move(ptr3); // move copy assignment operator

    ptr1.reset();
    ptr1.reset(new int(5));

    cout<< (*ptr1); //implementing * operator
    ptr1->func(); // implementing -> operator

    ptr1.get(); // raw pointer

    ptr1.get_count(); // number of objects pointing to the same resource

    //dtor

    */
   




}