#include<iostream>
#include<string.h>
class Student
{
	char name[50],mobile[50],address[50],room[50];
	
	public:Student(char n[50],char m[50],char a[50],char r[50])
	{
		std::cout<<"Students\n";
		strcpy(name,n);
		strcpy(mobile,m);
		strcpy(address,a);
		strcpy(room,r);
	}
	public:void display()
	{
std::cout<<"Name = "<<name<<", Mobile_No = "<<mobile<<", Address = "<<address<<", Room = "<<room<<"\n";
	}
};
int main()
{
	Student* s1=new Student("Punit","9559618602","Varanasi","5");
	s1->display();
}
