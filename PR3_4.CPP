#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
cout<<"Output is prepared By: 443 Vimal_Chaudhary"<<endl;
for(i=1;i<=5;i++)
{
for(j=5;j>=1;j--)
{
if(i>=j)
{
cout<<"* ";
}
else
{
cout<<" ";
}
}
cout<<endl;
}
getch();
}