#include<iostream.h>
#include<conio.h>
class staff
{
char name[20];
int basic,HRA,gross_salary,DA;
public:
void get()
{
cout<<endl<<"Enter staff name and basic Salary:-";
cin>>name>>basic;
}
void cal()
{
DA=(74.5*100)/basic;
HRA=(30*100)/basic;
gross_salary=basic+HRA+DA;
}
void set()
{
cout<<endl<<"Basic SAlary:-"<<basic;
cout<<endl<<"DA:-"<<DA;
cout<<endl<<"HRA:-"<<HRA;
cout<<endl<<"Gross Salary:-"<<gross_salary;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
staff s1;
s1.get();
s1.cal();
s1.set();
getch();
}