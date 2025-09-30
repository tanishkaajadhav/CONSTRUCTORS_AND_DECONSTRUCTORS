#include <iostream>
using namespace std;

class ParameterDemo
{
private:
    int a, b;

public:
    ParameterDemo(int x, int y)
    {
        a = x;
        b = y;
        cout << "Parameterized constructor called\n";
    }

    void Display()
    {
        cout << "a = " << a << ", b = " << b << "\n";
    }
};

int main()
{
    ParameterDemo obj(10, 20);
    obj.Display();

    return 0;
}

/*
OUTPUT
Parameterized constructor called
a = 10, b = 20

*/