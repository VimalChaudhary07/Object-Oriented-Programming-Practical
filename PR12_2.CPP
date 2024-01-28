#include"iostream.h"
#include<conio.h>
class car
{
char car_type[15];
public:
void input1()
{
cout<<endl<<"Enter car type:-";
cin>>car_type;
}
void output1()
{
cout<<endl<<"Type of car = "<<car_type;
}
};
class brand: public car
{
char brand_name[20];
int speed;
public:
void input2()
{
cout<<endl<<"Enter Brand Name:-";
cin>>brand_name;
cout<<"Enter Speed:-";
cin>>speed;
}
void output2()
{
cout<<endl<<"Brand Name = "<<brand_name;
cout<<endl<<"Speed = "<<speed<<" Km/h";
}
};
class model :public brand
{
char model_name[15];
int price;
public:
void input3()
{
cout<<endl<<"Enter Model Name of Car:- ";
cin>>model_name;
cout<<"Enter Model Price of a Car:-";
cin>>price;
}
void output3()
{
cout<<endl<<"Model name = "<<model_name ;
cout<<endl<<"Price of car = "<<price;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary";
model m1;
m1.input1();
m1.input2();
m1.input3();
m1.output1();
m1.output2();
m1.output3();
getch();
}