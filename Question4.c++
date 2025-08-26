#include<iostream>
using namespace std;

int main()
{

int a[]={34,2,2,5,5};

int n=sizeof(a)/sizeof(int);

int i;
int j=0;

for(i=1;i<=n;i++)
{

if(a[i]!=a[j])
{

j++;
a[j]=a[i];
continue;

}
}

cout<<"\nRemoved Dublicate : ";

for(i=0;i<=j;i++)
{

cout<<" "<<a[i];
}

return 0;
}


