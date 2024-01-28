#include<iostream.h>
#include<conio.h>
class Number
{
int x,y;
public:
void in()
{
cout<<endl<<"Enter the value of x:-";
cin>>x;
cout<<"Enter the value of y:-";
cin>>y;
}
void addition();
void subtraction();
void multiplication();
void division();
};
inline void Number::addition()
{
int z=x+y;
cout<<endl<<"Addition = "<< z;
}
inline void Number::subtraction()
{
int z=x-y;
cout<<endl<<"Subtraction = "<< z;
}
inline void Number::multiplication()
{
int z=x*y;
cout<<endl<<"Multiplication = "<< z;
}
inline void Number::division()
{
int z=x/y;
cout<<endl<<"Division = "<< z;
}
void main()
{
clrscr();
cout<<endl<<"Output is Prepared by:- 443 Vimal_Chaudhary.";
Number n1;
n1.in();
n1.addition();
n1.subtraction();
n1.multiplication();
n1.division();
getch();
}