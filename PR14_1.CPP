#include<iostream.h>
#include<conio.h>
class Book
{
char book_name[20],author[20];
int price;
public:
void input()
{
cout<<endl<<"Enter the Book Name:-";
cin>>book_name;
cout<<"Enter Author Name:-";
cin>>author;
cout<<"Enter Price:-";
cin>>price;
}
void output()
{
cout<<endl<<"Book Name= "<<book_name;
cout<<endl<<"Author= "<<author;
cout<<endl<<"Price= "<<price;
}
};
void main()
{
clrscr();
cout<<"Output is Prepared By:- 443 VimalChaudhary"<<endl;
Book *ptr,B1;
ptr=&B1;
ptr->input();
ptr->output();
getch();
}