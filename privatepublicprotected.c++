#include <iostream>
#include<string.h>
class A 
{
public:void publicf1()
    {
      std::cout<<"\nPublic F1 in class A "; 
    }
private: void privatef2()
    {
    std::cout<<"\nPrivate F2 in class A ";
    }
protected:void protectedf3()
    {
    std::cout<<"\nprotected F2 in class A ";
    }
};
/***********************************************************************************************/
class B:public A
{ 
public:void display()
{
A::publicf1();
//A::privatef2();
A::protectedf3();
}
};
/*******************************************************************************************/
class C
{
public: void display()
{
A a;
a.publicf1();
//a.privatef2();
//a.protectedf3();
}
};
int main()
 {
     A a;
     a.publicf1();
//     a.privatef2();
//     a.protectedf3();
B b;
b.display();

C c;
c.display();

    return 0;
} 
