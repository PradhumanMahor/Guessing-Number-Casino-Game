#include <bits/stdc++.h>
// #include <cstdlib> Use to have the Random numebers
using namespace std;

void rules()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}


int main (){
    string PlayerName;
    int balance; 
    int guess;
    int dice;
    int bettingamount;
    char choice;
    srand(time(0));
    cout<<"\t\t\t________________Welcome to the Casino Game______________\n\n";
    cout<<"\t\t Enter Your Name :- ";
    cin>>PlayerName;
    do{
        cout<<"\t\t Enter Your Starting betting balance :- ";
        cin>>balance;
        if(balance <=0 ){
            cout<<"\t\t\t---------Please Enter the Valid Amount--------\n";
        }
    }while(balance<=0);
    
    
    do{
        system("cls");
        rules();
        cout<<"\t\t\t\t\tHey , "<<PlayerName<<"\n"<<endl;
        cout<<"\n\n Your Current Balance is "<<balance<<" $\n"<<endl;
        do{
            cout<<"\t\t\tEnter the Betting Amount you want to bet on :- ";
            cin>>bettingamount;
            if(bettingamount> balance){
                cout<<"\n\n\n\t\t\tBetting Amount is higher then your balance!!!\n\t\t\tEnter the Valid Betting Amount "<<endl;
            }
        }while(bettingamount>balance || bettingamount==0);

        do{
            cout<<"\n\t\t\tGuess any betting number you want to bet on \n\t\t\tThe number must be between 1-10 :- ";
            cin>>guess;
            if(guess<=0 || guess>10){
                cout<<"\t\t\tEnter the Valid Number !!"<<endl;
            }
        }while(guess<=0 || guess>10);

        dice = rand()%10 +1;
        if(guess==dice){
            cout<<"\t\t\tCONGRATULATIONS you won the bet \n\t\t\tHere is your Updated Balance :- ";
            cout<<balance + bettingamount*10<<endl;
            balance = balance + bettingamount*10;
        }
        else{
            cout<<"\n\n\t\t\tOOPs!! Better Luck next time\n\t\t\tHere is your updated balance :-";
            balance = balance - bettingamount;
            cout<<balance;
        }
        cout<<"\n\n\t\t\tThe Winning Number was :- "<<dice<<endl;
        if(balance==0){
            cout<<"\n\nYou have no money left!! Sorry for the inconvience the game is over !!"<<endl;
            break;
        }
        cout<<"\n\n\n\t\tIf you want to play again\n\t\tPress Y or y to continue \n\t\tPress any other key to Exit :-";
        cin>>choice;
    }while(choice == 'Y' || choice =='y');

cout<<"\n\n\t\t Thanks For playing with us !! Your balance is "<<balance<<" $"<<endl;

return 0;
}