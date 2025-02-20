#include<iostream>
/******************************************* A class **********************************************/
class A
{

public:void publicf1()
{
std::cout<"Public F1 class in A";
}

private:void privatef2()
{
std::cout<<"Private F1 class in A";
}

protected:void protectedf3()
{
std::cout<<"Protected F1 class in A";
}
};
/************************************* B Clas *****************************************************/
class B:private A
{
public:void display()
{
//A::publicf1();
////A::privatef2();
//A::protectedf3();
}
};
/******************************************* C Class **********************************************/
class C: public B
{
public:void display()
{
//B::publicf1();
//B::privatef2();
//B::protectedf3();
}
};
/********************************** Main Function ************************************************/
int main()
{

//A a;
//a.publicf1();
//a.privatef2();
//a.protectedf3();

//B b;
//b.publicf1();
//b.privatef2();
//b.protectedf3();

C c;
c.publicf1();
c.privatef2();
c.protectedf3();

return 0;
}

