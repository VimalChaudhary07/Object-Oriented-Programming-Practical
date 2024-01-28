#include<iostream.h>
#include<conio.h>
class Book
{
char bookName[20];
char authorName[20];
public:
float price;
void get();
void set();
};
void Book::get()
{
cout<<endl<<endl<<"Enter BookName:-";
cin>>bookName;
cout<<"Enter AuthorName:-";
cin>>authorName;
cout<<"Enter Price:-";
cin>>price;
}
void Book::set()
{
cout<<endl<<"Book_Details:-"<<endl<<"BookName:-"<<bookName<<endl<<"AuthorName:-"<<authorName<<endl<<"Price:-"<<price;
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:- 443 Vimal Chaudhary.";
Book b1,b2;
b1.get();
b2.get();
if(b1.price>b2.price)
{
b1.set();
}
else
{
b2.set();
}
getch();
}
