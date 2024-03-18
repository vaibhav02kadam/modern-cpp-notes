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
        std::shared_ptr<Entity> e0;
        {
            //Shared Pointer
            std::shared_ptr<Entity> shared_entity = std::make_shared<Entity>();

            //Weak ptr given value of shared entity.
            //It does not increase the ref count as it does for other shared ptr.
            std::weak_ptr<Entity> weak_entity = shared_entity;
            //It would work for sharedpointer but not Unique pointer
            // std::shared_ptr<Entity> e0 = shared_entity;

            e0 = shared_entity;
        }

        //Delete Entity called here when the second reference dies
    }

    std::cin.get();
}