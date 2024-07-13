#include <iostream>

/*
Need for constructor
    1. Special function that executes at new instance creation.
    If you don’t define a constructor for a class, the compiler will supply a default default
    constructor. it is without arguments
    2. If there is nothing to do in a default constructor’s body always prefer = default; over {}
    3. Member intializer 
        // Constructor definition using a member initializer list
        Box::Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv}
        {
          std::cout << "Box constructor called." << std::endl;
        }
    4. explicit keyword
        Problem with class constructors with a single parameter is that the compiler can use such a constructor as
        an implicit conversion from the type of the parameter to the class type.
*/

class Box
{
private:
    double length_ {1.0};
    double width_ {1.0};
    double height_ {1.0};

public:
    // Constructor
    Box(double lengthValue, double widthValue, double heightValue)
    {
        std::cout << "Box constructor called."  << std::endl;
        length_ = lengthValue;
        width_ = widthValue;
        height_ = heightValue;
    }
    explicit Box(double side);
    Box() = default; // 2.
    //Function to calcuate volume of box
    double volume()
    {
        return length_ * width_ * height_;
    }
};

int main()
{
    /* 1. Box myBox; default constructor
        std::cout << "Volume of myBox is " << myBox.volume() << std::endl;  // Volume is 12.0
    */

    Box firstBox {80.0, 50.0, 40.0};            // Create a box
    double firstBoxVolume {firstBox.volume()};  // Calculate the box volume
    std::cout << "Volume of Box object is " << firstBoxVolume << std::endl;

}