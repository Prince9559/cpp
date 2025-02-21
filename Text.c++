#include<iostream>
#include<string.h>
class Savingaccount
{
char name[50],account[50];
int balance;
public:Savingaccount(char n[50],char a[50],int b)
{
strcpy(name,n);
strcpy(account,a);
balance=b;
}
public:Savingaccount()
{
std::cout<<"Enter the Customer Name :";
std::cin>>name;

std::cout<<"Enter the Customer Account_No :";
std::cin>>account;

std::cout<<"Enter the Customer Balance :";
std::cin>>balance;

}
public:void deposit()
{
int amount;
std::cout<<"Enter the Balance Deposit :\n";
std::cin>>amount;
if(amount>=1)
balance=balance+amount;
else
std::cout<<"Not Deposit Balance\n";
}

public:void deposit(int amount)
{
if(amount>=1)
balance=balance+amount;
else
std::cout<<"Not Deposit Balance";
}

public:void withrawal()
{
int amount;
std::cout<<"\nEnter the Balance Withrawal :";
std::cin>>amount;
if(amount>=1)
balance=balance-amount;
else
std::cout<<"Not Withrawal Balance\n";
}

public:void withrawal(int amount)
{
if(amount>=1)
balance=balance-amount-10;
else
std::cout<<"Not withrawal Balance";
}

public:void display()
{
std::cout<<"Name ="<<name<<", Address ="<<account<<", Balance ="<<balance;
}
};


class Currentaccount:public Savingaccount
{
public:Currentaccount():Savingaccount()
{
std::cout<<"Customer Is The Best :\n";
}

public:void deposit(int amount)
{
std::cout<<"\nEnter the Deposit Balance :";
std::cin>>amount;
if(amount>=5)
Savingaccount::deposit(amount-5);
else
std::cout<<"Not Deposit Balance";
}

public:void withrawal(int amount)
{
std::cout<<"\nEnter the balance Withrawal :";
std::cin>>amount;
if(amount>=5)
Savingaccount::withrawal(amount-5);
else
std::cout<<"Not withrawal Balance";
}
};
int main()
{
//Savingaccount* s1=new Savingaccount("Prince","9559838383",1000);
//s1->display();
Currentaccount c0;
c0.display();
c0.deposit(1);
c0.display();
c0.withrawal(1);
c0.display(); 
return 0;
}

