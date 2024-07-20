#include<iostream>
#include <cstring>

using namespace std;

class String
{

    public:
        /* Default Ctor -Intializer lists
         Used to initialize variables - when we cannot intialize inside ctor
        */ 
        String(): resrc_(nullptr), len_(0)
        {
            
        }
        // Parameterized ctor
        String(const char* ch)
        {
            len_ = strlen(ch);
            resrc_ = new char[len_+1];
            strcpy(resrc_, ch);
        }

        /*  
        copy constructor
        Type::Type(const Type& object)
        {
          // Code to duplicate the object...
        }
        */

        String(const String& str)
        {
            len_ = str.len_;
            resrc_ = new char[len_ + 1];
            strcpy(resrc_, str.resrc_);
        }

        // Move constructor
        //#TODO Rvalues and Lvalues
        String(const String&& str)
        {
            len_ = str.len_;
            resrc_ = str.resrc_;
            str.resrc_ = nullptr;
            str.len_ = 0;
        }

        // Self assignment check 
        String &operator = (String& str)
        {
            // What if the new memory allocation fails we already lose the actual resource by delete

            /*
            if(this != &str){
                delete[] resrc_;  // #PROBLEM HERE 
                len_ = str.len_;
                resrc_ = new char[len_ + 1];
                // how to handle this??
                strcpy(resrc_ , str.resrc_);
            }
            */
       
           // creating temp variable
            if(this != &str){
                char* temp = this->resrc_;
                len_ = str.len_;
                resrc_ = new char[len_ + 1];
                // What if the new memory allocation fails we already lose the actual resource by delete
                // how to handle this??
                strcpy(resrc_ , str.resrc_);
                delete[] temp;
            }
            return *this;
        }

        // elegant way of handling this case is CAS (Copy and Swap Idom )
        String &operator = (String str)
        {
            swap(this, str);
            return *this; // CAS idiom
        }

        void swap( String& str1, String& str2)
        {
            std::swap(str1.resrc_, str2.resrc_);
            std::swap(str1.len_, str2.len_);
        }


        // Friend function to access the private variable from the global operator overloaded.

        friend ostream& operator<<(ostream& out, const String& str)
        {

        }


        friend istream& operator>>(ostream& in, const String& str)
        {

        }

    private:
        char* resrc_;
        unsigned int len_;



};

ostream& operator<<(ostream& out, const String& str)
{
    out<<str.resrc_; // declare friend function to access that class
    return out;
}

istream& operator>>(istream& in, const String& str)
{
    in>>str.resrc_; // declare friend function to access that class
    return in;
}



int main()
{
    /*
    Following are the features/intended use cases for our String class
    String str1; // Default constructor
    String str2 = "hello" // parameterised ctor
    String str3 = str1; // copy constructor - also edge case str3 = str3
    str3 = str2; // copy assignment operator

    int len = str2.length();

    cout<<str2; // operator overloading <<
    cin>>str1; // operator overloading >>

    cout<<str1<<str2<<str3;

    String str5(str1);

    */
}