#include "lib.h"
#include "account.h"
#include "banking.h"

int main(){
    int choice = 0;
    int accountNumber=0;
    int amountInCAD = 0;

    Banking bank("THP");
    
    cout<<"===== * " + bank.getBankName() + " * ====="<<endl;
    cout<<endl;
    cout<<"\t1. Open an account"   <<endl;
    cout<<"\t2. Balance enquiry"   <<endl;
    cout<<"\t3. Deposit"           <<endl;
    cout<<"\t4. Withdraw"          <<endl;
    cout<<"\t5. Close an account"  <<endl;
    cout<<"\t6. Show all accounts" <<endl;
    cout<<"\t7. Quit"              <<endl;
    cout<<endl;
    while(1){
        cout<<"Please enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                
                bank.openNewAccount();
                break;
            case 2:
                //getBalanceEnquiry();
                break;
            case 3:
                bank.deposit();
                break;
            case 4:
                bank.withdraw(accountNumber,amountInCAD);
                break;
            case 5:
                bank.closeAccount();
                break;
            case 6:
                //displayAllAccounts();
                break;
            case 7:
                cout << "Thank you for choosing " + bank.getBankName() + " BANK";
                cout << "Have a great day";
                exit(1);
            default:
                cout << "Invalid choice!" <<endl;
                break;
        }
    }

    
    
    
    /*
    Account acc1("Phuong","Truong", 10);
    acc1.setBalance(500.50);
    acc1.showAccountDetails();
    */
    return 0;
}
