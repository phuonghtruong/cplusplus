#ifndef BANKING_H
#define BANKING_H

#include "lib.h"
#include "account.h"
class Account;

class Banking{
private:
    Account account;
    string bankName;
public:
    Banking();
    Banking(string bankName);

    void setBankName(string bankName);
    string getBankName();

    void setAccount(string firstName, string lastName, double balance);
    Account getAccount();
    void openNewAccount();
    void closeAccount();
    //void addAccountNumber(long accountNumber, double amountInCAD = 0);
    //void deleteAccountNumber(long accountNumber);
    //void setAccountOwner(Account accountOwner);
    //Account getAccountOwner();
    
    void deposit();
    void withdraw(long accountNumber=0,double amountInCAD=0);
    //void transferBetweenAccount(Account accountOwner, long fromAccountNumber, long toAccountNumber, double amountInCAD);
    //void transferToAccount(long fromAccountNumber, long toAccountNumber, double amountInCAD);
    ~Banking();
};
#endif
