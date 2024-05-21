#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const size_t size {5};
    double x[size] {};
    size_t count {};

    while (true)
    {   
        double input {};
        cout<<"Enter a non zero value or 0 to end : \n" ;
        cin>>input;

        if(input == 0)
            break;

        x[count] = input;

        //Increment the count first and check if equal to size
        if(++count == size)
        {
            cout<<" storage limit reached "<<endl;
            break;
        }
    }

    if(!count)
    {
        cout<<" Nothing to sort "<<endl;
    }

    cout<<"Starting sort "<<endl;

    while (true)
    {
        bool swapped{false};
        for(size_t i{}; i< count - 1; ++i){
            if(x[i] > x[i+1]){
                const auto temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
            break;
    
    }

    std::cout << "Your data in ascending sequence:\n"<< std::fixed << std::setprecision(1);
    const size_t perline {10};              // Number output per line
    size_t n {};            // Number on current line
    for (size_t i {}; i < count; ++i)
    {
        std::cout << std::setw(8) << x[i];
        if (++n == perline)             // When perline have been written...
        {
        std::cout << std::endl;       // Start a new line and...
        n = 0;          // ...reset count on this line
        }
        }
    std::cout << std::endl;

    
    


    
    return 0;
}