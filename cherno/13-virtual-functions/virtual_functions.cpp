#include <iostream>
#include <string>

class Entity
{

public:
    virtual std::string getName() { return "entity"; }
};

class Player : public Entity
{

private:
    std::string name_;
public:
    Player(const std::string& name)
        : name_(name) {}

    std::string getName() override { return name_; }

};

void PrintName(Entity* entity)
{
    std::cout << entity->getName() << std::endl;
}

int main()
{
    Entity* entity = new Entity();
    PrintName(entity);
    Player* p = new Player("Ben");
    PrintName(p);
    Entity* e = p;
    PrintName(e);
}