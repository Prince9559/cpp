#include<iostream>
class A
{
public:void f1()
{
std::cout<<"\nFunction F1 in A";	
}
public:virtual void f2()
{
	std::cout<<"\nFunction F2 in A";
}
};

class B:public A
{
	public:void f1()
	{
		std::cout<<"\nF1 Function of B called";

	}
	public:void f2()
	{
		std::cout<<"\nF2 Function of B Called";
	}
};

int main()
{
	A* a=new B();
	a->f1();
	a->f2();
	
	return 0;
}
