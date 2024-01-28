#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,x1,x2,root;
clrscr();
cout<<endl<<"Output is Prepard by: 443 Vimal_Chaudhary"<<endl;
cout<<endl<<"enter the value of a,b,c:-";
cin>>a>>b>>c;
root=(b*b-(4*a*c));
x1=(-b+sqrt(root)/2*a);
x2=(-b-sqrt(root)/2*a);
cout<<endl<<"value of x1="<<x1;
cout<<endl<<"value of x2="<<x2;
getch();
return 0;
}