#include <iostream>

class Entity 
{
public:
    float x, y;

    Entity()
    {
       std::cout << "created entity" << std::endl; 
        x = 0;
        y = 0;
    }

    Entity(float x, float y)
    {
       std::cout << "created entity" << std::endl; 
        this->x = x;
        this->y = y;
    }

    ~Entity()
    {
       std::cout << "destroyed entity" << std::endl; 
    }
    
    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

class Log
{
// private:
//     Log() {}
public:
    Log() = delete;
    static void Write()
    {
        
    }
};

void Function()
{
    Entity e(6.0f, 5.9f);
    e.Print();
    e.~Entity(); // can manually call the destructor --> odd

}

int main()
{
    // Log log; // log constructor is deleted
    Function();
    // std::cout << e.x << std::endl;
}