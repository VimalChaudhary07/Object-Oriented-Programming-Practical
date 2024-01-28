#include<iostream.h>
#include<conio.h>
class Number
{
int x,y;
public:
Number()
{
x=20;
y=10;
}
Number(int a,int b)
{
x=a;
y=b;
}
void display()
{
cout<<endl<<"X= "<<x;
cout<<endl<<"Y= "<<y;
cout<<endl<<"Addition= "<<x+y;
cout<<endl<<"Substraction= "<<x-y;
cout<<endl<<"Multiplication= "<<x*y;
cout<<endl<<"Division= "<<float(x)/y;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
Number n1;
Number n2(50,25);
cout<<endl<<"For Object: 1";
n1.display();
cout<<endl<<"For Object: 2";
n2.display();
getch();
}