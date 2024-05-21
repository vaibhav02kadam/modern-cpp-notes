#include <iostream>

/*
As a rule, you should always initialize a pointer when you define it. If you cannot give it its intended
value yet, initialize the pointer to nullptr.
*/

int main()
{
    // long* pnumber{}; // Don't intialise like this
    long* pnumber{nullptr};


    long height {1454L};
    pnumber = &height;  // & address of operator

    /*
    &height = 1000
    pnumber saves the address location 1000 ie it points to the memory address 1000 which has stored the value 1454

    */

   /******* Pointer arthimetic *************/

   double values[] {2,3,4,5,6};
   double* pvalues {values};

    std::cout<<" Pointer to values array "<<pvalues<<std::endl; // shows the memory address
    std::cout<<" Pointer to values array "<<*pvalues<<std::endl; // first element of array ie 2
    pvalues++;// address got incremented -> now it points to 2 element of array ie 3
    std::cout<<" Incremented Pointer to values array "<<*(pvalues)<<std::endl; //ptints value 3 2nd element

    /*************** Dynamic memory allocation *****************/

    double* pval {};
    pval = new double;
    std::cout<<"New allocated memory location "<<pval<<std::endl;
    *pval = 3.14;
    delete pval;
    pval = nullptr;






    return 0;
}