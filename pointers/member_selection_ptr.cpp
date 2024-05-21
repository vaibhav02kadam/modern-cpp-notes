#include <iostream>
#include <vector>
// Member selection through pointer (->) has methods (functions) that can be accessed

int main()
{
    // auto* pdata {new std::vector<int>{} };
    // OR
    std::vector<int> data;
    auto* pdata = &data;
    
    // (*pdata).push_back(66);//  () parentheses required as . has higher precedence than *

    // arrow operator or indirect member selection operator
    pdata->push_back(66);
    
    return 0;
}