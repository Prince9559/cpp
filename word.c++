#include<iostream>
int main()
{
	int c,r,n;
	char name[50];
	std::cout<<"Enter value of Number :";
	std::cin>>name;
	while(name>0)
	{
		r=n%10;
		std::cout<<","<<r;
		n=n/10;
	}
	return 0;
} 
