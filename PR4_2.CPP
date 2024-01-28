#include<iostream.h>
#include<conio.h>
void main()
{
int arr[100],i,j,no;
clrscr();
cout<<"Output is prepared by:- 443 Vimal_Chaudhary";
cout<<endl<<"Enter size of array:-";
cin>>no;
cout<<"Enter any element:-";
for(i=0;i<no;i++)
{
cin>>arr[i];
}
cout<<endl<<"Repeated values are:-";
for(i=0;i<no;i++)
{
for(j=i+1;j<no;j++)
{
if(arr[i]==arr[j])
{
cout<<endl<<arr[j]<<" ";
}
}
}
getch();
}