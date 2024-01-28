#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,sum;
clrscr();
cout<<endl<<"output is prepared by:-443 Vimal Chaudhary";
cout<<endl<<"Enter value for 1st 3*3 mstrix:-"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
cout<<endl;
}
cout<<"enter value for 2nd 3*3 matrix:-"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>b[i][j];
}
cout<<endl;
}
cout<<"\nThe 1st 3*3 matrix entered by you is:-"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
cout<<"\nThe 2nd 3*3 matrix entered by you is:-"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=0;
for(k=0;k<3;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
}
}
cout<<endl<<"the multiplication of the above twp matrix is:-"<<endl;
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}
getch();
}