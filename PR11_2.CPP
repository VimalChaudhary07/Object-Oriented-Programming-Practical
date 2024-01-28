#include<iostream.h>
#include<conio.h>
class employee
{
char emp_name[50],emp_designation[200];
int emp_no;
public:
void input1()
{
cout<<endl<<"Enter Employee Name:-";
cin>>emp_name;
cout<<"Enter Employee ID:-";
cin>>emp_no;
cout<<"Enter Employee Designation:-";
cin>>emp_designation;
}
void output1()
{
cout<<endl<<"Employee NAME = "<< emp_name;
cout<<endl<<"Employee ID = "<< emp_no;
cout<<endl<<"Employee Designation = "<< emp_designation;
}
};
class salary:public employee
{
int basic,hra,da,gross_sal;
public:
void input2()
{
cout<<endl<<"Enter Basic Salary:-";
cin>>basic;
cout<<"Enter HRA:-";
cin>>hra;
cout<<"Enter DA:-";
cin>>da;
gross_sal=basic+hra+da;
}
void output2()
{
cout <<endl<<"Basic = "<<basic;
cout <<endl<<"HRA = "<<hra;
cout <<endl<<"DA = "<<da;
cout <<endl<<"Gross Salary = "<<gross_sal;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
salary s1;
s1.input1();
s1.input2();
s1.output1();
s1.output2();
getch();
}