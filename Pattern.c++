#include<iostream>
int main()
{
int i,j,n=7,mid,condition;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
	condition=(i==j);
	if(condition)
std::	cout<<" *";
}
std::	cout<<"  ";
}		
return 0;
} 
 
