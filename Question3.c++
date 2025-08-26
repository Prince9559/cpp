#include<iostream>
using namespace std;

int main()
{

int a[]={3,4,8,9};

int n=sizeof(a)/sizeof(int);

int i;

for(i=n-1;i>=0;i--)
{

cout<<" "<<a[i];

}

return 0;
}
