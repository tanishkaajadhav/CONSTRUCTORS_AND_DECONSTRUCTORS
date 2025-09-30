#include <iostream>
using namespace std;

class CopyDemo
{
private:
    int num;

public:
    CopyDemo(int n)
    {
        num = n;
    }

    CopyDemo(const CopyDemo &obj)
    {
        num = obj.num;
        cout << "Copy constructor called\n";
    }

    void Display()
    {
        cout << "Number: " << num << "\n";
    }
};

int main()
{
    CopyDemo obj1(50);
    CopyDemo obj2 = obj1; 

    obj1.Display();
    obj2.Display();

    return 0;
}

/*
OUTPUT
Copy constructor called
Number: 50
Number: 50
*/