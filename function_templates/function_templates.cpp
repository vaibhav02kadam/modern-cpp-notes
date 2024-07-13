/*
Function templates
    function template is a parametric function definition, where a particular function
    instance is created by one or more parameter values
    1. The typename keyword identifies that T is a type.  T is hence called a template type parameter
    2. Function return type deduction was only introduced recently—in C++14

*/

#include <iostream>

//Pass by values
template <typename T> T larger(T a, T b)
{
    return a>b ? a: b;
}


// template <typename T> 
// const T& larger(T&  a, T& b)
// {
//     return a>b ? a: b;
// }

template <typename T1, typename T2>
auto larger(T1 a, T2 b)
{
    return a>b ? a: b;
}

// decltype(expression) produces the type  of the result of evaluating expression
template <typename T1, typename T2>
auto larger(T1 a, T2 b) -> decltype(a > b ? a : b)
{   
    return a > b ? a : b;
}


// Refer the C++ 14 syntax to be used
template <typename T1, typename T2>
auto larger(T1 a, T2 b) -> decltype(a > b ? a : b)
{
    return a > b ? a : b;
}

template <typename T1, typename T2>
decltype(auto) larger(T1 a, T2 b)
{
    return a > b ? a : b;
}


int main()
{
    std::cout<< "Larger of 1.5 and 2.5 is "<<larger(1.5, 2.5 )<<std::endl;
    std::cout<< "Larger of A and Z is "<<larger(std::string {"A"}, std::string {"Z"})<<std::endl;
    

}