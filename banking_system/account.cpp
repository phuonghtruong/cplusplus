#include "account.h"

int Account::index=0;

Account::Account(){
    firstName = "unknown";
    lastName = "unknown";
    accountNumber = 0;
    balance = 0.0;
}

Account::Account(string firstName, string lastName, double balance){
    setFirstName(firstName);
    setLastName(lastName);
    setAccountNumber();
    setBalance(balance);
}

void Account::setFirstName(string firstName){
    try
    {
        if(firstName.empty()){
            throw 1;
        }
        else{
            this->firstName = firstName;
        }
    }
    catch(int e){
        cout << "first name cannot be null";
    }
}

string Account::getFirstName(){
    return firstName;
}

void Account::setLastName(string lastName){
    try
    {
        if(lastName.empty()){
            throw 1;
        }
        else{
            this->lastName = lastName;
        }
    }catch(int e){
        cout << "last name cannot be null";
    }
}

string Account::getLastName(){
    return lastName;
}

void Account::setAccountNumber(){
    index++;
    accountNumber = ACCOUNT_NUMBER_BASE + index;
}

long Account::getAccountNumber(){
    return accountNumber;
}

void Account::setBalance(double balance){
    try{
        if(balance <= 0){
            throw 1;
        }
        else{
            this->balance = balance;
        }
    }catch(int e){
        cout<<"balance cannot be negative";
    }
}

double Account::getBalance(){
    return balance;
}

void Account::showAccountDetails(){
    cout<<getLastName()<<", "<<getFirstName()<<"\t\t\t"
        <<getAccountNumber()<<"\t\t\t"<<getBalance()<<endl;
}
