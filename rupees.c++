#include<iostream>
class Rupees
{
int rupees,paisa,total;
public:Rupees(int r,int p,int t)
{
rupees=r;
paisa=p;
total=t;

//	total=r*100+p;
//	r=total/100;
//	p=total%10;

}

public:Rupees()
{
std::cout<<"\n Enter the of Number Rupees and Paisa :";
std::cin>>rupees>>paisa;
}

public:void display()
{
//
	if(paisa<=9)
	std::cout<<"\n"<<rupees<<paisa;
	else
	std::cout<<rupees<<paisa;

}
};
int main()
{

Rupees r0;
//std::cout<<r0;
r0.display();
	return 0;
}
