#include<iostream.h>
#include<conio.h>
class Sample
{
private:
int x,y;
public:
void setdata(int a,int b)
{
x=a;
y=b;
}
void showdata()
{
cout<<"x="<<x<<endl<<"y="<<y;
}
friend void swap(Sample &s);
};
void swap(Sample &s)
{
int temp;
temp=s.x;
s.x=s.y;
s.y=temp;
}
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
Sample s;
int x,y;
cout<<endl<<"Enter x = ";
cin>>x;
cout<<"Enter y = ";
cin>>y;
s.setdata(x,y);
cout<<endl<<"Before Swapping\n";
s.showdata();
cout<<endl<<"After Swapping\n";
swap(s);
s.showdata();
getch();
}