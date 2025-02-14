#include<iostream>
int gcd(int x,int y)
{
if(x%y==0)
return y;
else
return gcd(y,x%y);
}
int main()
{
	int result=gcd(15,20);
	std::cout<<"GCD="<<result;
	return 0;
}
