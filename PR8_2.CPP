#include <iostream.h>
#include<conio.h>
class Distance
{
private:
int meters;
public:
void get()
{
cout<<endl<<"Enter the meters : ";
cin>>meters;
}
friend void sum(Distance x1,Distance x2)
{
int total=x1.meters + x2.meters;
cout<<endl<<"Total meters of two objects is "<<total;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary.";
Distance D1,D2;
D1.get();
D2.get();
sum(D1,D2);
getch();
}
