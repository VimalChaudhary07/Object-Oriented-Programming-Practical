#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],transpose[10][10],row,column,i,j;
clrscr();
cout<<endl<<"Output is prepared by:-443 Vimal Chaudhary";
cout<<endl<<"Enter row and column of matrix:-";
cin>>row>>column;
cout<<"Enter elements of matrix:-"<<endl;
for(i=0;i<row;++i)
{
for(j=0;j<column;++j)
{
cout<<"Enter element for a "<<i+1<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<"entered martix:-"<<endl;
for(i=0;i<row;++i)
{
for(j=0;j<column;++j)
{
cout<<" "<<a[i][j];
if(j==column-1)
{
cout<<endl;
}
}
}
for(i=0;i<row;++i)
{
for(j=0;j<column;++j)
{
transpose[j][i]=a[i][j];
}
}
cout<<endl<<"transpose of matrix:-"<<endl;
for(i=0;i<column;++i)
{
for(j=0;j<row;++j)
{
cout<<" "<<transpose[i][j];
if(j==row-1)
{
cout<<endl;
}
}
}
getch();
}