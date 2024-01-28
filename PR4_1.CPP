#include<iostream.h>
#include<conio.h>
void main()
{
int arr1[10],arr2[10],n1,n2,i;
int sum1=0,sum2=0;
float mid1=0,mid2=0,median=0;
clrscr();
cout<<"Output is prepared By:- 443 Vimal_Chaudhary"<<endl;
cout<<endl<<"Enter the number of element of array 1:-";
cin>>n1;
cout<<"Enter the element of array1:-";
for(i=0;i<n1;i++)
{
cin>>arr1[i];
sum1=sum1+arr1[i];
}
cout<<endl<<"Enter the number of element of array 2:-";
cin>>n2;
cout<<"Enter the element of array 2:-";
for(i=0;i<n2;i++)
{
cin>>arr2[i];
sum2=sum2+arr2[i];
}
mid1=sum1/n1;
cout<<endl<<"Median of array 1:-"<<mid1<<endl;
mid2=sum2/n2;
cout<<"Median of array 2:-"<<mid2<<endl;
median=(mid1+mid2)/2;
cout<<endl;
cout<<"The median of array 1 and 2:-"<<median<<endl;
getch();
}