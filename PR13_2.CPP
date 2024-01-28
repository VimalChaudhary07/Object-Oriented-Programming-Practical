#include<iostream.h>
#include<conio.h>
class cricketer
{
protected:
char cricketer_name[20],team_name[20];
public:
void input()
{
cout<<endl<<"Enter Cricketer Name:-";
cin>>cricketer_name;
cout<<endl<<"Enter Team Name:-";
cin>>team_name;
}
void output()
{
cout<<endl<<"Cricketer Name="<<cricketer_name;
cout<<endl<<"Team Name="<<team_name;
}
};
class bowler:virtual public cricketer
{
int wickets;
public:
void input1()
{
cout<<endl<<"No of Wickets:-";
cin>>wickets;
}
void output1()
{
cout<<endl<<"Wickets="<<wickets;
}
};
class batsman:public virtual cricketer
{
int runs;
public:
void input2()
{
cout<<endl<<"No of runs are:-";
cin>>runs;
}
void output2()
{
cout<<endl<<"No of runs="<<runs;
}
};
class allrounder: public bowler,public batsman
{
char allrounder_name[20];
public:
void in()
{
cout<<endl<<"Name of the allrounder player:-";
cin>>allrounder_name;
}
void out()
{
cout<<endl<<"Allrounder name="<<allrounder_name;
}
};
void main()
{
clrscr();
cout<<endl<<"Output is Prepared By:-443 Vimal Chaudhary";
allrounder a;
a.input();
a.input1();
a.input2();
a.in();
a.output();
a.output1();
a.output2();
a.out();
getch();
}