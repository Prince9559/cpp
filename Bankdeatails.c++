#include <iostream>
#include <string.h>
class Bank
{
    char customer_name[50], account_no[5];
    int balance;

    public:
    Bank() // Zero Parameter constructor
    {
        std::cout << "Enter Customer_Name :";
        std::cin >> customer_name;

        std::cout << "Enter Account_No :";
        std::cin >> account_no;

        std::cout << "Enter Balance :";
        std::cin >> balance;
    }

    public:
    Bank(char c[50], char a[5], int b) // 3 parameters constructo
    {
        std::cout << "BankCustomer" << "\n";
        strcpy(customer_name, c);
        strcpy(account_no, a);
        balance = b;
    }
    
    public: void deposit()
    {
    int amount;
    std::cout<<"Enter the deposit=";
    std::cin>>amount;
    if(amount>=1)
    balance=balance+amount;
    else
    std::cout<<"Not desposite Rupees\n";
    }
    
    public: void withdrawal()
    {
    int amount;
    std::cout<<"Enter the withdrawal :";
    std::cin>>amount;
    if(amount>1)
    balance=balance-amount;
    else
    std::cout<<"Not Withrawal Rupees\n";
    }
    
    public:
    void display()
    {
        std::cout << "Customer_Name = " << customer_name << ",Account_No = " << account_no << ",Balance = " << balance << "\n";
    }
};
int main()
{

    Bank b("Bhide", "10", 1000);
//    Bank b0;
//    b0.display();
      b.display();
      b.deposit();
      b.display();

//      b.display();
      b.withdrawal();
      b.display();
//    Bank *b1 = new Bank();
//
//    b1->display();
//    b1 = new Bank("Jetha", "100", 120);
//    b1->display();
      return 0;
}   
