#include <iostream>
#include <stdlib.h>
using namespace std;



int displayMenu();
void checkBalance();
void deposit(double amount);
void withdraw(double amount);
void startAtm();


double balance=500;




void checkBalance()
{
    cout<<"balance = "<<balance<<endl;
    displayMenu();
}
void withdraw(double amount)
{
    if(amount>balance && amount>0)
    {
        cout<<"not possible"<<endl;
    }
    else
    {
        balance=balance-amount;
        cout<<"Showing balance after withdraw"<<endl;
        checkBalance();
    }
    displayMenu();

}

void deposit(double amount)
{
    if(amount>0)
    {
        balance=balance+amount;
        cout<<"Showing balance after deposit"<<endl;
        checkBalance();
        displayMenu();

    }
    else
    {
        cout<<"Not possible!"<<endl;
    }
}

int displayMenu()
{
    int n;
    cout<<"1. check balance"<<endl;
    cout<<"2. withdraw "<<endl;
    cout<<"3. Deposit "<<endl;
    cout<<"4. exit "<<endl;
    cin>>n;

    if(n==1)
    {
        checkBalance();
    }
    else if(n==2)
    {
        cout<<"Enter amount you want to withdraw"<<endl;
        double amount;
        cin>>amount;
        withdraw(amount);
    }
    else if(n==3)
    {
        cout<<"Enter amount you want to deposit"<<endl;
        double amount;
        cin>>amount;
        deposit(amount);
    }
    else if(n==4)
    {
        exit(3);
    }
    else
    {
        cout<<"Invalid input!"<<endl;
        displayMenu();
    }

    return 0;




}


void startAtm()
{

    int id;
    int pin ;
    cout<<"Enter your ID & PIN"<<endl;
    cin>>id>>pin;
    if(id==123456 && pin==234)
    {
        cout<<"Login Success"<<endl;
        displayMenu();
    }
    else
    {
        cout<<"Login Failure!"<<endl;
    }
}




int main()
{

    startAtm();
    int displayMenu();


    return 0;
}
