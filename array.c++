#include<iostream>
int main()
{
int a[]={3,4,6,7,9,2,1,5};
int size=sizeof(a)/sizeof(int);
int i,j;
for(i=0;i<=size-1;i++)
{
for(j=i+1;j<=size-1;j++)
{
if(a[i]+a[j]==7)
{
std::cout<<a[i]<<"+"<<a[j]<<"= 7"<<"\n";
}
}
}
return 0;
}

