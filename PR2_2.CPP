#include<iostream.h>
#include<conio.h>
void main()
{
int no,rem,sum=0,temp;
clrscr();
cout<<"Output is prepared by: 443 Vimal_Chaudhary"<<endl;
cout<<endl<<"Enter the Number:-";
cin>>no;
no=temp;
while(no!=0)
{
rem=no%10;
sum=sum+(rem*rem*rem);
no=no/10;
}
if(temp==sum)
cout<<"Armstrong Number."<<endl;
else
cout<<"Not Armstrong Number."<<endl;
getch();
}