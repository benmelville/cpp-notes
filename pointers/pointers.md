# Pointers

### what is a pointer?
A pointer is a number which stores a memory address

It does not matter if you have an int pointer or a string pointer, types are meaningless here. 

A pointer for all types is just an integer that holds a memory address.

A pointer does not need a type. If we give a pointer a type, we are just saying that the data at the address is presumed to be the type that we give it. 

We use types of pointers just to make our lives easier (makes the code more readable)


### null pointers
```cpp
void* ptr = NULL; // NULL is actually equal to 0
```

note NULL is just #defined to 0





```bash
cpp-notes/pointers/pointers.cpp:17:3: error: call to 'fun' is ambiguous
   17 |   fun(NULL);
      |   ^~~
cpp-notes/pointers/pointers.cpp:3:6: note: candidate function
    3 | void fun(int N)
      |      ^
cpp-notes/pointers/pointers.cpp:9:6: note: candidate function
    9 | void fun(char *s)
      |      ^
1 error generated.
```

#### the issue
Under the hood `NULL` is 0 as seen below
```cpp
#define NULL 0
```

Therefore, when we doing 
```