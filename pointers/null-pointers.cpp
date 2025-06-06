#include <iostream>

// overloaded function with integer argument
void fun(int N)
{
  std::cout << "fun(int)" << std::endl;
  return;
}

// overloaded function with char* argument
void fun(char *s)
{
  std::cout << "fun(char*)" << std::endl;
  return;
}

int main()
{
  void *ptr = NULL;

  // We want this to call fun(char*), but it causes a compiler error because the call is ambiguous
  //   fun(ptr);
  // this works!
  fun(nullptr);
}
