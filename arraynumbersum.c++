#include<iostream>
void searchSum(int a[],int n,int target,int index,int output)
{
if (target==0)
{
std::cout<<" Target found"<<" "<<output<<" "<<"\n";
return;
}
if(index>=n)
return;

searchSum(a,n,target-a[index],index+1,output*10+index);
searchSum(a,n,target,index+1,output);
}
int main()
{
int target=7;
int a[]={3,4,6,7,9,2,1,5};
int n=sizeof(a)/sizeof(int);

searchSum(a,n,target,1,0);

return 0;
}
