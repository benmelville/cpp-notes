#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// void Increment(int* value)
// {
//   (*value)++;
// }
void Increment(int& value)
{
  value++;
}


int main()
{
  // there is nothing you can do with a reference that you cannot do with a pointer
  // once you declare a reference, you cannot change what it references

  int a = 9; // a is assigned 9

  LOG(a);
  // Increment(&a);
  Increment(a);


  int* b = &a; // b is assigned to address of a
  int& ref = a; // ref is an alias for a
  
  // ref = 2;

  LOG(ref);

}