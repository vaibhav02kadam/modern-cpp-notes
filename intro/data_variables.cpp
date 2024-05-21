

#include <iostream>

int main(){
    int apple_count {15};
    int orange_count {5};
    int total_fruit {apple_count+ orange_count};

    std::cout << "The value of apple_count is " << apple_count << std::endl;
    std::cout << "The value of orange_count is " << orange_count << std::endl;
    std::cout << "The value of total_fruit is " << total_fruit << std::endl;

    /*
    signed char     1 byte   -128 to + 127

    short           2 byte     -256 to + 256
    short int 
    signed short 
    signed short int 

    int           4 byte        -2,147,483,648 to +2,147,483,647
    signed
    signed int
                            
    long            4 or 8            Same as either int or long long
    long int
    signed long
    signed long int
    
    long long         8             -9,223,372,036,854,775,808 to  +9,223,372,036,854,775,807
    long long int
    signed long long
    singed long long int
   

    unsigned type is when we dont require negative values
    */

    int counter {0};  // or counter {} is the same
    const unsigned kCount {10};  // An unsigned integer withh fixed value 10
    // const keyword  tells the compiler that value of kCount must not change. 
    
}