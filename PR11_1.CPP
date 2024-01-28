#include<iostream.h>
#include<conio.h>
class student
{
char name[15];
int rollno;
public:
void input1()
{
cout<<endl<<"Enter the Name of Student:- ";
cin>>name;
cout<<"Enter the Rollno of Student:-";
cin>>rollno;
}
void display1()
{
cout <<endl<<"NAME = " << name;
cout <<endl<<"ROLLNO = " << rollno;
}
};
class marks:public student
{
int m1,m2,m3,total;
float percentage;
public:
void input2()
{
cout<<endl<<"Enter the marks of all three subjects:- ";
cin>>m1>>m2>>m3;
}
void calculate()
{
total=m1+m2+m3;
percentage=total/3;
}
void display2()
{
cout<<endl<<"m1 = "<< m1;
cout<<endl<<"m2 = "<< m2;
cout<<endl<<"m3 = "<< m3;
cout<<endl<<"total = "<< total;
cout<<endl<<"percentage = "<< percentage;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
marks obj;
obj.input1();
obj.input2();
obj.calculate();
obj.display1();
obj.display2();
getch();
}