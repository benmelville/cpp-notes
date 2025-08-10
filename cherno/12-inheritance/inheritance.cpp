#include <iostream>

class Entity
{
    public:
    float x, y;

    void Move(float xa, float ya)
    {
        x += xa;
        y += ya;
    }

};

class Player : public Entity
{
public:
    const char* name;

    void PrintName()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    std::cout << "entity size: " << sizeof(Entity) << std::endl;
    std::cout << "entity size: " << sizeof(Player) << std::endl;
    Player player;
    player.Move(3, 7);
    player.name = "ben";
    player.PrintName();

}