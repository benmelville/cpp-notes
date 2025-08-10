
#include <iostream>

int static_int = 89;

// static means it is only going to be visible to that C++ file.

void foo()
{

}

int main()
{
    std::cout << static_int << std::endl;
}