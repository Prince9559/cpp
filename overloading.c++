#include<iostream>
class overloading
{
public: void add(int a,int b)
{
int sum=a+b;
std::cout<<sum;
}

public: void add(int a)
{
int sum=a;
std::cout<<sum;
}

public: void add()
{
int sum=0;
std::cout<<sum;
}
};
int main()
{
overloading ol;
ol.add();
ol.add(1);
ol.add(1,2);
return 0;
}

