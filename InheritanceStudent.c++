#include<iostream>
#include<string.h>
/******************************************** Person Class ***********************************/
class Person
{
char name[50],mobile[50],address[50];
public:Person(char n[50],char m[50],char a[50])
{
std::cout<<"Person\n";
strcpy(name,n);
strcpy(mobile,m);
strcpy(address,a);
}
public:Person()
{
std::cout<<"Enter the Student Name :";
std::cin>>name;

std::cout<<"Enter the Student Mobile_No :";
std::cin>>mobile;

std::cout<<"Enter the Student Address :";
std::cin>>address;
}
public:void display()
{
std::cout<<"\nStudent_Name = "<<name<<",Mobile_Number = "<<mobile<<",Address = "<<address;
}
};
/****************************** Student Class *******************************************************/
class Student:public Person
{
char myclass[50];
public:Student(char n[50],char m[50],char a[50],char c[50])
//:Person(n,m,a)
{
strcpy(myclass,c);
}
public:void display()
{
Person::display();

std::cout<<", Class = "<<myclass<<"\n";
}
public:Student()
{
std::cout<<"Enter the Student Class :";
std::cin>>myclass;
}
};
/************************************ Main Function ***********************************************/
int main()
{
Person* p1=new Person("Punit","9559618602","Varanasi");
//p1->display();

//Student* s1=new Student("Punit","9559618602","Varanasi","12");
//s1->display();

Student s0;
s0.display();

return 0;
}
