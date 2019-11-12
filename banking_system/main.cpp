#include "lib.h"
#include "account.h"
#include "banking.h"

int main(){
    
    Account acc1("Phuong","Truong", 10);
    acc1.setBalance(500.50);
    acc1.showAccountDetails();
    return 0;
}
