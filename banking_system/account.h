#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "lib.h"

class Account{
    private:
        string firstName;
        string lastName;
        long accountNumber;
        double balance;
        //const int ACCOUNT_NUMBER_BASE = 8000;
        static long index ;
    public:
        static const long ACCOUNT_NUMBER_BASE = 8000;
        

        Account();
        Account(string firstName, string lastName, double balance);
        void setFirstName(string firstName);
        string getFirstName();
        void setLastName(string lastName);
        string getLastName();

        static void setAccountNumber();
        long getAccountNumber();
        void setBalance(double balance);
        double getBalance();
        void showAccountDetails();
        ~Account();
};

#endif
