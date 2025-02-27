#include<iostream>
void printArray(int a[],int n)
{
for(int i=0;i<=n-1;i++)

std::cout<<" "<<a[i];
std::cout<<"\n";
}
int main()
{
int a[]={9,4,6,8,2,1};
int n=sizeof(a)/sizeof(int);
int i,j,t;
printArray(a,n);
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-2-i;j++)
{

if(a[j]>a[j+1])
{

t=a[j];
a[j]=a[j+1];
a[j+1]=t;
//printArray(a,n);
}
}
}

printArray(a,n);
return 0;	
}
