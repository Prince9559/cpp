#include<iostream>
using namespace std;
class Myclass
{
private:
int data;
public:Myclass(int values):data(values){}

friend void add(Myclass obj)
};
void add(Myclass obj)
{
cout<<"Private Number :"<<onj.data;
}

int main()
{
Myclass obj(45);
add(obj);
return 0;
}
