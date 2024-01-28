#include <iostream.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void rules();
int main()
{
    clrscr();
    char playerName[100];
    int balance;
    int bettingAmount;
    int guess;
    int dice;
    char choice;
    srand(time(0));
    cout <<endl<<"\t\t========WELCOME TO CASINO WORLD======="<<endl<<endl;
    cout <<endl<<"What's your Name :-";
    cin>>playerName;
    cout <<endl<<"Enter the starting balance to play game :Rs. ";
    cin >> balance;
    do
    {
    system("cls");
    rules();
    cout <<endl<<endl<<"Your current balance is Rs. " << balance <<endl;
    do
    {
    cout << "Hey, " << playerName<<", enter amount to bet : Rs. ";
    cin >> bettingAmount;
    if(bettingAmount > balance)
    cout << "Betting balance can't be more than current balance!"<<endl<<endl<<"Re-enter balance "<<endl;
    }
    while(bettingAmount > balance);
    do
    {
    cout << "Guess any betting number between 1 & 10 :";
    cin >> guess;
    if(guess <= 0 || guess > 10)
    cout <<endl<<"Number should be between 1 to 10"<<endl<<"Re-enter number:"<<endl;
    }
    while(guess <= 0 || guess > 10);
    dice = rand()%10 + 1;
    if(dice == guess)
    {
    cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
    balance = balance + bettingAmount * 10;
    }
    else
    {
    cout << "Oops, better luck next time !! You lost Rs. "<< bettingAmount <<endl;
    balance = balance - bettingAmount;
    }
    cout <<endl<<"The winning number was : " << dice <<endl;
    cout <<endl<<playerName<<", You have balance of Rs. " << balance <<endl;
    if(balance == 0)
    {
    cout << "You have no money to play ";
    break;
    }
    cout <<endl<<endl<<"-->Do you want to play again (y/n)? ";
    cin >> choice;
    }
    while(choice =='Y'|| choice=='y');
    cout <<endl<<endl<<endl;
    cout << "\n\nThanks for playing the game. Your balance is Rs. "<<balance<<endl<<endl;
    getch();
    return 0;
    }
    void rules()
    {
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======"<<endl;
    cout << "\t1. Choose a number between 1 to 10"<<endl;
    cout << "\t2. Winner gets 10 times of the money bet"<<endl;
    cout << "\t3. Wrong bet, and you lose the amount you bet"<<endl<<endl;
    }