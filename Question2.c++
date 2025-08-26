#include<iostream>
using namespace std;

int main()
{
int a[]={3,4,2,9};

int n=sizeof(a)/sizeof(int);

int i;
int min=a[0];

for(i=0;i<=n-1;i++)
{
if(a[i]<min)
{
min=a[i];
}
}

cout<<"Min  : "<<min;

return 0;
}
