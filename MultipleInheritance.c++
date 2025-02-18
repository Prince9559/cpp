#include<iostream>
#include<string.h>
/************************************************ A Class *****************************************/
class A
{
char name[50];
public:A(char n[50])
{
	std::cout<<"Apple\n";
	strcpy(name,n);
}
public:A()
{
std::cout<<"Enter the A Name :";
std::cin>>name;
}
public:void display()
{
	std::cout<<"A = "<<name;
}
	
};
/************************************************* B Class ******************************************/
class B:public A
{
char secondname[50];
public:B(char n[50],char sn[50])
{
strcpy(secondname,sn);
}
public:void display()
{
A::display();
std::cout<<", B = "<<secondname;
}
public:B()
{
std::cout<<"Enter the B Name :";
std::cin>>secondname;
}
};
/********************************************* C Class ********************************************/
class C:public B
{
char thirdname[50];
public:C(char sn[50],char tn[50])
{
strcpy(thirdname,tn);
}
public:void display()
{
B::display();
std::cout<<", C = "<<thirdname;
}
public:C()
{
std::cout<<"Enter the C Name :";
std::cin>>thirdname;
}
};
/******************************************** Main Function ****************************************/
int main()
{

	C c0;
	c0.display();
	
return 0;	
}
