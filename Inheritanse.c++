#include<iostream>
#include<string.h>
/******************************* Person Class ******************************************************/
class Person
{
	char name[50],mobile[12],address[50];
	
public:Person(char n[50],char m[12],char a[50])
	{
		std::cout<<"Person\n";
		strcpy(name,n);
		strcpy(mobile,m);
		strcpy(address,a);
	}
	public:Person()
	{
    std::cout<<"\nEnter the Person Name :";
    std::cin>>name;
    
    std::cout<<"Enter the Person Mobie_Number :";
    std::cin>>mobile;
    
    std::cout<<"Enter the Person Address : ";
    std::cin>>address;
}	
public:void display()
	{
		std::cout<<"\nName = "<<name<<", Mobile_Number = "<<mobile<<", Address = "<<address;
	}
};

/************************************ Employee Class *************************************************/
class Employee:public Person
{
char post[50];
int salary;
public:Employee(char n[50],char m[12],char a[50],char p[50],int s)
//:Person(n,m,a)
//:Person()
{
strcpy(post,p);
salary=s;
}

public:void display()
{
Person::display();
std::cout<<" ,Post = "<<post<<", Salary = "<<salary;
}
public:Employee()
{
std::cout<<"Enter the Person Post =";
std::cin>>post;

std::cout<<"Enter the Person Salary =";
std::cin>>salary;
}
};

/******************************** Main Function *************************************************/
int main()
{
	Person* p1=new Person("Punit Kumar","9559543248","Varanasi\n");
//    Employee* e1=new Employee("Punit Kumar","9559543248","Varanasi\n","Software",100000);
//    e1->display();
////    
//    Person p0;
//    p0.display();
//	p1->display();


Employee e0;
e0.display();

	return 0;
} 
