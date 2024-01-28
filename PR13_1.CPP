#include<iostream.h>
#include<conio.h>
class Area
{
public:
int a,len,br;
void area(int l,int b)
{
len=l;
br=b;
a=len*br;
}
};
class Perimeter
{
public:
int p,len,br;
void perimeter(int l,int b)
{
len=l;
br=b;
p=2*(len+br);
}
};
class Rectangle:public Area,public Perimeter
{
public:
void display()
{
cout<<endl<<endl<<"Area:-"<<a;
cout<<endl<<"Perimeter:-"<<p;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
Rectangle r;
r.area(20,30);
r.perimeter(10,60);
r.display();
getch();
}