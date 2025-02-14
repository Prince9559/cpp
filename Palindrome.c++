#include<iostream>
int main()
{
	int r,c,n,sum;
	std::cout<<"Enter value of Number :\n";
	std::cin>>n;
	c=n;
	while(n>0)
	{
		r=n%10;
		sum=r+(sum*10);
		n=n/10;
	}
	if(c==sum)
	std::cout<<"Palindrome Number";
	else
	std::cout<<"Not Palindrome Number";
	return 0;
}
