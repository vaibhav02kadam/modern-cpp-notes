#include <iostream>


int main()
{
    double sum {};
    unsigned count {};
    double temperatures[] {45.5, 50.0, 48.2, 57.0};
    for(auto t : temperatures){
        sum += t;
    }

    /*
    The above example t is initialized to value of current array and t does not access
    element itself but just a local copy of some value as the element

    with the reference you can access the element to change it. check following example.
    */

    /*
    Using reference for range based loop is efficent.
   */

    const double F2C {5.0/9.0};
    for(auto &t : temperatures)
        t = (t - 32.0) * F2C;

    

}
