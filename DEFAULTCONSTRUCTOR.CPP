#include <iostream>
using namespace std;

class DefaultDemo
{
private:
    int x;

public:
    DefaultDemo()
    {
        x = 0;
        cout << "Default constructor called\n";
    }

    void Display()
    {
        cout << "Value of x: " << x << "\n";
    }
};

int main()
{
    DefaultDemo obj; 
    obj.Display();

    return 0;
}

/*
OUTPUT
Default constructor called
Value of x: 0
*/