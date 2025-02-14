#include<iostream>
#include<string.h>
class Book
{
char bookname[80], subject[80];//Class variables, class members.
int price;
public:  Book(char n[80],char sub[80],int p)// Constructor
{
std::cout<<"Constructor\n";
strcpy(bookname,n);// parameters arguments to class variables
strcpy(subject,sub);
price=p;
}
public: void display()
{
std::cout<<"Book name="<<bookname<<",Subject="<<subject<<",Price="<<price<<"\n";
}
};
int main()
{
Book* b1=new Book("Basic C++","C++",100);// new allocates memory. Book is the constructor
Book* b2=new Book("Advanced C++","C++",400);
Book* b3=new Book("Besic C","C Language",150);
//std::cout<<"Book";
b1->display();
b2->display();
b3->display();
return 0;
} 
