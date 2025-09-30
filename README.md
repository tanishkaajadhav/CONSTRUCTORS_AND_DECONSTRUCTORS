(a) FUNCTION OVERLOADING – FUNCTIONOVERLOADING.CPP

AIM:
To demonstrate function overloading in C++, where multiple functions have the same name but different parameter types.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Function overloading allows two or more functions with the same name but different parameter lists (number or types).
The compiler decides which function to invoke at compile time (known as compile-time polymorphism).

ALGORITHM:

Start the program and include <iostream>.

Define a class with two functions Add() – one taking integers, one taking doubles.

Create an object of the class.

Call the integer version and double version with respective arguments.

Display the results.

End the program.

CONCLUSION:
The program successfully demonstrates function overloading by using the same function name Add for integer addition and double addition.

(b) OPERATOR OVERLOADING – OPERATOROVERLOADING.CPP

AIM:
To demonstrate operator overloading in C++, where operators are given additional meanings for user-defined types.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Operator overloading allows redefining existing operators (like +, -, *, etc.) so that they can operate on objects.
In this program, the + operator is overloaded to add two complex numbers.

ALGORITHM:

Start the program and include <iostream>.

Define a Complex class with data members real and imag.

Define a constructor for initialization.

Overload the + operator to add two Complex objects.

Create objects c1 and c2.

Use c3 = c1 + c2 to invoke operator overloading.

Display the result using a member function.

End the program.

CONCLUSION:
The program successfully demonstrates operator overloading by adding two complex numbers using the + operator.

(c) CONSTRUCTOR OVERLOADING – CONSTRUCTOROVERLOADING.CPP

AIM:
To demonstrate constructor overloading in C++, where multiple constructors are defined for different ways of initializing objects.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Constructor overloading allows having more than one constructor with different parameter lists.
This enables creating objects with or without initial values.

ALGORITHM:

Start the program and include <iostream>.

Define a class Sample with data members x and y.

Define two constructors:

Default constructor (initializes values to 0).

Parameterized constructor (initializes with given values).

Create objects using both constructors.

Display values of each object using a member function.

End the program.

CONCLUSION:
The program successfully demonstrates constructor overloading, showing both default and parameterized object initialization.
