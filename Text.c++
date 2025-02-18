#include<iostream>
class Overloading
{
public:void add(int a,int b)
{
int sum=a+b;
std::cout<<sum<<"\n";
}
public:void add(float a,float b)
{

float sum=a+b;
std::cout<<sum<<"\n\n";
} 
};
int main()
{
float a,b;

std::cout<<"Enter the A values :";
std::cin>>a;

std::cout<<"Enter the B Values :";
std::cin>>b;

Overloading ol;
ol.add(a,b);
//ol.add((float)a,(float)b);

return 0;
}

