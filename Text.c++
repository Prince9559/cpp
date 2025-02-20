#include<iostream>
#include<string.h>
class SavingAccount
{
char name[50],account[50];
int balance;
public:SavingAccount(char n[50],char a[50],int b)
{
strcpy(name,n);
strcpy(account,a);
 balance=b;
}
public:void deposit()
{
int amount;
std::cout<<"\nEnter the Balance Deposit :";
std::cin>>amount;
if(amount>=1)
balance=balance+amount;
else
std::cout<<"Not balance Deposit\n";
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
std::cout<<"\nEnter the Withrawal Balance :";
std::cin>>amount;
if(amount>=1)
balance=balance-amount-5;
else
std::cout<<"Not Withrawal Balance\n";
}

public:void withrawal(int amount)
{
if(amount>=1)
balance=balance-amount;
else
std::cout<<"Not Balance Withrawal";
}

public:SavingAccount()
{
std::cout<<"Enter the Name:";
std::cin>>name;

std::cout<<"Enter the Account Name :";
std::cin>>account;

std::cout<<"Enter the Balance :";
std::cin>>balance;
}
public:void display()
{
std::cout<<"Name ="<<name<<", Address ="<<account<<", Balance ="<<balance;
}
};


class CurrentAccount:public SavingAccount
{
public:CurrentAccount():SavingAccount()
{
std::cout<<"Customer :\n";
}

public:void deposit(int amount)
{
std::cout<<"\nEnter the Current balance :";
std::cin>>amount;
if(amount>=5)
SavingAccount::deposit(amount-5);
else
std::cout<<"\nNot Deposit Balance\n";
}

public:void withrawl(int amount)
{
std::cout<<"Enter the Current balance:";
std::cin>>amount;
if(amount>=5)
SavingAccount::withrawal(amount-5);
else
std::cout<<"Not withrawal";
}
};
int main()
{
//SavingAccount* s1=new SavingAccount("Prince","9493023030",1000);
//s1->display();
//s1->deposit();
//s1->display();
//s1->withrawal();
//s1->display();

CurrentAccount c;
c.display();
c.deposit(2);
c.display();
c.withrawal();
c.display();

return 0;
}

