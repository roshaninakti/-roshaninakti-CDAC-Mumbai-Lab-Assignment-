#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Original values: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << ", y = " << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}
/*
1.Explain how reference variables act as aliases and how that affects swapByReference().
 -> A reference variable is simply another name (alias) for an existing variable. It does not create new memory.
It refers to the same memory location.

*/