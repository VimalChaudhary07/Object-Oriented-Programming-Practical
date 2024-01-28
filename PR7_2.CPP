#include<iostream.h>
#include<conio.h>
class city
{
public:
int population;
char name[40];
void accept();
void display();
};
void city::accept()
{
cout<<"Enter name of City:-";
cin>>name;
cout<<"Enter the Population of city:-";
cin>>population;
}
void city::display()
{
cout<<endl<<"Name of City:-"<<name;
cout<<endl<<"Population:-"<<population;
}
void main()
{
int i;
clrscr();
cout<<"Output is Prepared By:- 443 Vimal Chaudhary"<<endl<<endl;
city c[10];
for(i=0;i<=9;i++)
{
c[i].accept();
cout<<endl;
}
for(i=0;i<=9;i++)
{
c[i].display();
cout<<endl;
}
getch();
}