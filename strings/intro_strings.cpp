#include <iostream>

int main()
{
    std::string empty;

    std::string proverb {"I'm learning string manipulation"};
    char* proverb_data = proverb.data();

    std::cout<<proverb.length()<<std::endl;


    std::string phrase (proverb, 0, 12);

    std::cout<<"Phrase "<<phrase<<std::endl;

    // Curly braces dont work 
    std::string sleeping{5, 'z'};
    std::string open_wide(5, 'a'); 

    std::cout<<" Sleeping "<<sleeping<<"   Open Wide  "<<open_wide<<std::endl;
    
    return 0;
};