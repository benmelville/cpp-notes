#include <iostream>
#include <string>

class Printable
{
public:
    virtual std::string getClassName() = 0;
};

class Entity : public Printable
{

public:
    virtual std::string getName() { return "entity name" ;}
    // virtual std::string getName() ;

    std::string getClassName() override { return "entity"; }
};

class Player : public Entity
{

private:
    std::string name_;
public:
    Player(const std::string& name)
        : name_(name) {}

    std::string getName() override { return name_; }
    std::string getClassName() override { return "player"; }

};

void PrintName(Entity* entity)
{
    std::cout << entity->getName() << std::endl;
}

void Print(Printable* obj)
{
    std::cout << obj->getClassName() << std::endl;
}

int main()
{
    Entity* entity = new Entity();
    // PrintName(entity);    
    Player* player = new Player("Ben");
    Print(entity);
    Print(player);
    // PrintName(p);
    Entity* e = player;
    // PrintName(e);
}