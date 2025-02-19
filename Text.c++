 // Online C++ compiler to run C++ program online
#include <iostream>
class SavingAccount
{
int balance=0;
public:void deposit()
{
    int amount;
    std::cout<<"Enter the Balance :";
    std::cin>>amount;
    if(amount>=1)
    balance=balance+amount;
    else
    std::cout<<"Not Deposit";
}
public:void deposit(int amount)
{
    
 
 
    if(amount>=1)
    balance=balance+amount;
    else
    std::cout<<"Not Deposit";
}
public:void display()
{
    std::cout<<"\nBalance"<<balance;
}
};
class CurrentAccount:public SavingAccount
{
    public:CurrentAccount():SavingAccount()
    {
        std::cout<<"Customer\n";
    }
    public:void deposit( int amount)
    {
       
     
        if(amount>=5)
        {
      SavingAccount::deposit(amount-5);
        }
        else
        std::cout<<"Not Deposit";
    }
};

int main() {
    
    CurrentAccount c0;
    c0.display();
    c0.deposit(20);
    c0.display();
    return 0;
} 
