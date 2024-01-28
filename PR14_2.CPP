#include<iostream.h>
#include<conio.h>
class box
{
float h,w,l;
public:
void in()
{
cout<<endl<<"Enter Height,Weidth and Breadth:-";
cin>>h>>w>>l;
}
void out()
{
float area,volume;
area=2*(h*w)+2*(h*l)+2*(w*l);
volume=h*w*l;
cout<<endl<<"Area of Box = "<<area;
cout<<endl<<"Volume of Box = "<<volume;
}
};
void main()
{
clrscr();
cout<<"Output is Prepared By:- 443 VimalChaudhary"<<endl;
box *ptr,b1;
ptr=&b1;
ptr->in();
ptr->out();
getch();
}