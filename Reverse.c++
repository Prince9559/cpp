#include<iostream>
int main()
{
	int c,r,n;
	std::cout<<"Enter value of Number :\n";
	std::cin>>n;
	while(n>0)
	{
		r=n%10;
		std::cout<<","<<r;
		n=n/10;
	}
	return 0;
}
