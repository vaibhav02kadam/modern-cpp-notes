#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout<<"Created a Entity !"<<std::endl;
    }

    ~Entity()
    {
        std::cout<<"Destroyed Entity !"<<std::endl;
    }

    void Print()
    {
        std::cout<<"Called Print function \n";
    }
};

int main()
{  
        {
            //Unique Pointer
            std::unique_ptr<Entity> entity = std::make_unique<Entity>();

            entity->Print();
        }
    
    std::cin.get();
}