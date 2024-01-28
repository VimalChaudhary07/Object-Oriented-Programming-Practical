#include"iostream.h"
#include<conio.h>
class person
{
char name[20],gender[10];
int age;
public:
void input1()
{
cout<<endl<<"Enter Name of a Person:-";
cin >>name;
cout<<"Enter Gender of a Person:-";
cin>>gender;
cout<<"Enter Age of a Person:-";
cin>>age;
}
void output1()
{
cout<<endl<<"Name of Person = "<<name;
cout<<endl<<"Gender of Person = "<<gender;
cout<<endl<<"Age of Person = "<<age;
}
};
class employee:public person
{
char company_name[20];
int emp_id;
long int salary;
public:
void input2()
{
cout<<endl<<"Enter Company Name:-";
cin>>company_name;
cout<<"Enter Employee ID:-";
cin>>emp_id;
cout<<"Enter Employee Salary:-";
cin>>salary;
}
void output2()
{
cout<<endl<<"Company Name = "<<company_name;
cout<<endl<<"Empployee id = "<<emp_id;
cout<<endl<<"Employee salary = "<<salary;
}
};
class programmer:public employee
{
int lang_known;
public:
void input3()
{
cout <<endl<<"Enter total number of languages known by programmer:-";
cin>>lang_known;
}
void output3()
{
cout <<endl<<"Total Number of languages known = "<<lang_known;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
programmer p1;
p1.input1();
p1.input2();
p1.input3();
p1.output1();
p1.output2();
p1.output3();
getch();
}