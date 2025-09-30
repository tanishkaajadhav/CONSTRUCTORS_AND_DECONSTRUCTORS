#include <iostream>
using namespace std;

class DestructorDemo
{
public:
    DestructorDemo()
    {
        cout << "Constructor called\n";
    }

    ~DestructorDemo()
    {
        cout << "Destructor called\n";
    }
};

int main()
{
    DestructorDemo obj;
    cout << "Inside main function\n";

    return 0;
}

/*
OUTPUT
Constructor called
Inside main function
Destructor called
*/