#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    Box(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void setDimensions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int volume()
    {
        return length * width * height;
    }
};

int main()
{
    Box box1(10, 5, 2);

    cout << "Volume of Box1 (Constructor Initialization): "
         << box1.volume() << endl;

    box1.setDimensions(7, 4, 3);

    cout << "Volume of Box1 (After setDimensions): "
         << box1.volume() << endl;

    return 0;
}

/*/
1. Why must initialization happen before assignment?
Initialization must happen before assignment because the object must be created and memory must be allocated before we can modify its values. 
Initialization sets the first valid state of an object, while assignment updates an existing object.

2.When is initialization preferred over assignment?
Initialization is preferred over assignment when dealing with const members, reference variables, and object composition because they must be initialized at the time of object creation. 
Initialization is also more efficient since it directly assigns values in memory instead of creating and then modifying them.
*/