#include <iostream>
// Base class A
/*************************************** A Class*****************************************************/
class A
{
public:A()
{
std::cout<<"Constructor of A called\n";
}
public: void f1()
{
std::cout<<"F1 function of A called\n";
}

// Member function f2 of A

public: void f2()
{
std::cout<<"F2 function of A called\n";
}

// Member function f3 of A

public: void f3()
{
std::cout<<"F3 function of A called\n";
}
};

// Derived class B inheriting from A
/***************************************** B Class ***********************************************/
class B: public A
{
public:

// Constructor of B, calls the constructor of A

B():A()
{
std::cout<<"Constructor of B called\n";
}

// Overriding function f1 from A

public: void f1()
{
std::cout<<"F1 function of B called\n";

A::f1(); // Explicitly calling f1 of A
}

// Overriding function f2 from A

public: void f2()
{
std::cout<<"F2 function of B called\n";
}
 
};
/**************************************** C Class***************************************************/
class C:public B
{
public:C():B()
{
std::cout<<"Constructor of C called\n\n";
}
public:void f1()
{
std::cout<<"F1 function of C called\n";
B::f1();
}
public:void f3()
{
std::cout<<"F3 function of C called\n";
}

};
/********************************************** Main Functin ***************************************/
int main() 
{
// Creating an object of class B
C c;
// Calling functions f1, f2, and f3
c.f1(); // Calls overridden function in B, then calls A's f1

c.f2(); // Calls overridden function in B

c.f3(); // Calls inherited function from A

return 0;
} 
