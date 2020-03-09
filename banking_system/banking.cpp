#include "banking.h"

Banking::Banking(){
    bankName = "unknown";    
}

Banking::Banking(string bankName){
    setBankName(bankName);
}

void Banking::setBankName(string bankName){
    try{
        if(bankName.empty()){
            throw 1;
        }
        else{
            this->bankName = bankName;
        }
    }catch(int e){
        cout << "bank name cannot be null";
    }
}

string Banking::getBankName(){
    return bankName;
}

void Banking::setAccount(string firstName, string lastName, double balance){
    account = Account(firstName, lastName, balance);
    cout << "Your new account has been set up.";
}

Account Banking::getAccount(){
    return account;
}


void Banking::openNewAccount(){
    string firstName, lastName;
    double balance;
    cout<<"Enter your first name: ";
    cin>>firstName;
    cout<<"Enter your last name: ";
    cin>>lastName;
    cout << "Enter initial balance: ";
    cin>>balance;
    setAccount(firstName, lastName, balance);
}

void Banking::closeAccount(){

}

void Banking::deposit(){
    long accountNumber;
    double amountInCAD;
    
    cout << "Enter account number: ";
    cin>>accountNumber;
    cout << "Enter deposit amount in CAD: ";
    cin >> amountInCAD;

    try{
        if(amountInCAD < 0){
            throw 1;
        }
        int currentBalance = account.getBalance();
        if(account.getAccountNumber() == accountNumber){
            account.setBalance(currentBalance + amountInCAD);
        }
        else{
            throw 'e';
        }
    }catch(int e){
        cout<<"amount cannot be negative" << endl;
    }
    catch(char e){
        cout<<"invalid account number" << endl;
    }
}

void Banking::withdraw(long accountNumber,double amountInCAD){

}

Banking::~Banking(){
    //destructor
}


