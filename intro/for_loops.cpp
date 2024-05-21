#include <iostream>


/*
    for (range_declaration : range_expression)
      loop statement or block;
*/

int main()
{

    // Type 1
    int values[] {2, 3, 4, 5, 6};
    int total{};

    for(int x: values)
        total += x;
    std::cout<<"Total is "<<total<<std::endl;

    // Type 1.2
    int total_1 {};
    for (auto x_1 : {2, 3, 4, 5, 6})
        total_1 += x_1;

    std::cout<<"Total is "<<total_1<<std::endl;

    /*
    for(;;)
    {
        body
    }
    */


    return 0;
}