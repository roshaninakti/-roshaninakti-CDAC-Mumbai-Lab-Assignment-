
#include <iostream>
using namespace std;

int main()
{
    int num = 10;   

    int *ptr = &num;

    int &ref = num;

    cout << "Initial value of num: " << num << endl;

    *ptr = 20;
    cout << "After modifying using pointer (*ptr = 20): " << num << endl;

    ref = 30;
    cout << "After modifying using reference (ref = 30): " << num << endl;

    return 0;
}
/*
1.Two differences between pointer and reference

-> Pointers store addresses and require dereferencing to access values, while references act as aliases and provide direct access.
 Additionally, pointers can be reassigned to point to different variables, whereas references cannot be changed after initialization

 2.Why references cannot be reseated but pointers can

 -> References are fixed aliases and must always refer to the same variable after initialization.
 Pointers are independent variables that store addresses, and since stored address is just a value, it can be changed
 
 3.Why references cannot be NULL

 - >References cannot be NULL because they are aliases of existing variables and must be bound to a valid object at initialization. 
 Unlike pointers, references do not store an address separately, so there is no way for them to hold a NULL value

 */