#include<iostream.h>
#include<conio.h>
void main()
{
int arr[50],small,ss,size,i;
clrscr();
cout<<"Output is prepared by:- 443 Vimal_Chaudhary."<<endl;
cout<<endl<<"Enter array size:-";
cin>>size;
cout<<"Enter element:-";
for(i=0;i<size;i++)
{
cin>>arr[i];
}
small=arr[0],ss=arr[0];
for(i=0;i<size;i++)
{
if(arr[i]<small)
{
ss=small;
small=arr[i];
}
else if(arr[i]<ss)
ss=arr[i];
}
cout<<"Smallest element:-"<<small<<endl<<"Second Smallest element:-"<<ss;
getch();
}