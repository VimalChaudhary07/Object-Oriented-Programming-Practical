#include<iostream.h>
#include<conio.h>
#include<string.h>
class product
{
int product_id,prod_price;
char prod_name[15];
public:
product()
{
product_id=11;
strcpy(prod_name,"vainalla");
prod_price=70;
}
product(int p_id,char p_name[15])
{
product_id=p_id;
strcpy(prod_name,p_name);
prod_price=90;
}
product(int p_id,char p_name[15],int price)
{
product_id=p_id;
strcpy(prod_name,p_name);
prod_price=price;
}
void output()
{
cout<<endl<<"PRODUCT ID = "<<product_id;
cout<<endl<<"PRODUCT NAME = "<<prod_name;
cout<<endl<<"PRODUCT PRICE = "<<prod_price;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
product p1,p2(22,"mango"),p3(33,"choclate",40);
p1.output();
p2.output();
p3.output();
getch();
}