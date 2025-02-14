#include<iostream>
int main()
{
	int c,r,arm,n;
	std:: cout<<"Enter value of Number :\n";
	std:: cin>>n;
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	std::cout<<"Armstrong Number";
	else
	std::cout<<"Not Armstrong Number";
	return 0;
}
