#include <iostream>

int main()
{
    int i = 0;
    bool condition = true;
    for ( ; condition ;)
    {
        std::cout << "hello world" << std::endl;
        i++;
        if (!(i < 5)) condition = false;
    }

}