#include<iostream.h>
#include<conio.h>
class Employee
{
int empid;
char empname[20];
long int empsalary;
public:
void get()
{
cout<<endl<<"Enter Employee ID:-";
cin>>empid;
cout<<"Enter Employee Name:-";
cin>>empname;
cout<<"Enter Employee Salary:-";
cin>>empsalary;
}
void set()
{
if(empsalary>25000)
{
cout<<endl<<"Employee Id:-"<<empid;
cout<<endl<<"Employee Name:-"<<empname;
cout<<endl<<"Employee Salary:-"<<empsalary;
cout<<endl;
}
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared by:- 443 Vimal_Chaudhary";
Employee e[5];
int i;
for(i=0;i<=4;i++)
{
e[i].get();
}
cout<<endl<<"#### Salary Greater than 25000/-.####"<<endl;
for(i=0;i<=4;i++)
{
e[i].set();
}
getch();
}