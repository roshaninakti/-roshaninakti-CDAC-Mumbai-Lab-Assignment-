#include <iostream>
using namespace std;

int main()
{
    
    int *arr = new int[5];

    
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }


    cout << "You entered:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    
    delete[] arr;

    return 0;
}
/*
1. Why constructors are not called when using malloc
->Constructors are not called when using malloc() because it is a C function that only allocates raw memory and has no knowledge of C++ classes. Constructors are invoked only by the new operator, which performs both memory allocation and object initialization.

2.Why new is preferred in C++
-> new is preferred in C++ because it allocates memory and automatically calls constructors, ensures type safety, supports exception handling, and works properly with object-oriented features. 
malloc() only allocates raw memory and does not initialize objects.

3.Difference in return types and initialization
-> new returns a typed pointer and automatically initializes objects by calling constructors. 
malloc() returns a void*, requires explicit casting in C++, and only allocates raw memory without initialization

4.Why malloc cannot initialize complex types
->malloc() cannot initialize complex types because it only allocates raw memory and has no knowledge of C++ constructors, destructors, or object initialization logic. 
Complex types require constructor execution to be properly initialized, which only the new operator performs

*/