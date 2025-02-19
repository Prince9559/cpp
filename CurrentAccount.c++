#include<iostream>
#include<string.h>
/*************************************** SavingAcoount Class **************************************/
class SavingAccount
{
char name[50],account[50];
//public:int balance;?
int balance;
public:SavingAccount(char n[50],char a[50],int b)
{
strcpy(name,n);
strcpy(account,a);
balance=b;
}
/*************************************** SavingAccount ka Deposit **********************************/
public:void deposit()
{
int amount;
std::cout<<"\nEnter the Saving Balance Deposit :";
std::cin>>amount;
if(amount>=1)
balance=balance+amount;
else
std::cout<<"Amount must be >0\n";
}

public:void deposit(int amount)
{    
    if(amount>=1)
    balance=balance+amount;
    else
    std::cout<<"Not Deposit";
}
/********************************** Savingaccount ka withrawal *************************************/
public:void withrawal()
{
int amount;
std::cout<<"\nEnter the Saving Balance withrawal :";
std::cin>>amount;
if(amount>=1)
balance=balance-amount;
else
std::cout<<"Saving balance Not withrawal\n";
}

public:void withrawal(int amount)
{
if(amount>=1)
balance=balance-amount-10;
else
std::cout<<"Not withrawal\n";
}
/***************************************Calling SavindAccount **************************************/
public:SavingAccount()
{
std::cout<<"Enter the Customer Name :";
std::cin>>name;

std::cout<<"Enter the Account_No :";
std::cin>>account;

std::cout<<"Enter the Customer Balance :";
std::cin>>balance;
}

public:void display()
{
std::cout<<"\nName = "<<name<<", Account_No = "<<account<<", Balance = "<<balance;
}
};
/********************************Class Current Account *******************************************/
class CurrentAccount:public SavingAccount
{
public:CurrentAccount():SavingAccount()
{
std::cout<<"Customer\n";
}

/**********************************Current ka Deposit ******************************************/
public:void deposit(int amount)
{
std::cout<<"\nEnter the Current Balance Deposit :";
std::cin>>amount;
if(amount>=5)
{
SavingAccount::deposit(amount-5);
}
else
std::cout<"Amount must be >5";
}
/*************************************** Current Ka withrawal **************************************/
public:void withrawal(int amount)
{
std::cout<<"\nEnter the Current Balance Withrawal :";
std::cin>>amount;
if(amount>=5)
{
SavingAccount::withrawal(amount-5);
}
else
std::cout<<"Amount must be >5";
}
};
/*************************************** Main Function *******************************************/
int main()
{
 
CurrentAccount ca;
ca.display();

ca.deposit(1);
ca.display();

ca.withrawal(1);
ca.display();

return 0;
}

