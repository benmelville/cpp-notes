#include <iostream>
#include <cstring>
#define LOG(x) std::cout << x << std::endl;

int main()
{
  // pointers for all types are just integers that hold a memory address
  void* ptr = 0; // void means completely typeless, we do not care what data type is. address 0 is not valid.
  void* ptr1 = NULL;
  void* ptr2 = nullptr;

  long long var = 8;
  LOG(var);
  
  long long* varptr = &var; // if we changed this to void* varptr = &var; we would get the same result
  // dereference the pointer - we need to tell the compiler what type this is so it knows how many bytes to write
  // otherwise, it has no way of knowing
  *varptr = 10;
  LOG(var);
  int* test = new int(7);
  LOG(test);
  char* buffer = new char[9]; // allocates 8 bytes and returns a pointer to the beginning of that block of memory
  std::memset(buffer, 10, 9);

  char** buffer_pointer = &buffer;


  delete[] buffer;
}