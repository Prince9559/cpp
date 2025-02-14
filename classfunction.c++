#include<iostream>
class Direct
{
public: void New()
{
std::cout<<"How are you\n";
}
};
int main()
{
Direct d1;
d1.New();
Direct *d2=new Direct();
d2->New();
(*d2).New();
//d1==*d2 objects
//d2=&d1 pointers
return 0;
}
