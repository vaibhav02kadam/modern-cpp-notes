#include <iostream>
#include <bitset>

int main(){

    unsigned short number{16387};

    auto left_shifted{static_cast<unsigned short>(number << 2)};  //shift left two bit positions


    std::string binary_original = std::bitset<16>(number).to_string(); //to binary
    std::cout<<"\n Decimal original  "<<number<<" Binary "<<binary_original;


    std::string binary_left_shifted = std::bitset<16>(left_shifted).to_string(); //to binary
    std::cout<<"\n Decimal Left shifted "<<left_shifted<<" Binary "<<binary_left_shifted;


    auto right_shifted{static_cast<unsigned short>(left_shifted >> 2)};  //shift right two bit positions

    std::string binary_right_shifted = std::bitset<16>(right_shifted).to_string(); //to binary
    std::cout<<"\n Decimal Right shifted "<<right_shifted<<" Binary "<<binary_right_shifted;






    return 0;
}