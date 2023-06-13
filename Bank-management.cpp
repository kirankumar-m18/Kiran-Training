/* 
Program for banking management system
Create a class Bank with the following member functions.
OpenAccount() – It will take input account number, name and opening balance.
ShowAccount() – It will display the account details such as account number, name and balance.
Deposit() – It will ask for the amount to be added in available balance, and deposit the amount.
Withdrawal() – It will ask for the amount to be withdrawn from the available, will also check the available balance, if balance is available, it will deduct the amount from the available balance.
Search() – It will search for the record and display the account info.

*/


#include <iostream>
using namespace std;

class Bank {
private:
    int account_no;
    char Name[30];
    long Balance;

public:
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acccount_no;
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter  Balance: ";
        cin >>Balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " <<acccount_no << endl;
        cout << "Name: " << Name << endl;
        cout << "Balance: " << Balance << endl;
    }
    void Deposit()
    {
        long amountt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amtount;
        Balance = Balance + amountt;
    }
    void Withdrawal()
    {
        long amountt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amount;
        if (amount <= Balance)
            Balance = Balance - amountt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int Bank::Search(int N)
{
    if (acccount_no == N) {
        ShowAccount();
        return (1);
    }
    return (0);
}


int main()
{
    Bank D[10];

    int found = 0, usr_accn, ch, i;
    for (i = 0; i <= 9; i++) {
        D[i].OpenAccount();
    }

    do {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: // account info
            for (i = 0; i <= 9; i++) {
                D[i].ShowAccount();
            }
            break;
        case 2: // searching details
            cout << "Enter Account Number: ";
            cin >> usr_accn;
            for (i = 0; i <= 9; i++) {
                found = D[i].Search(usr_accn);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit 
            cout << "Please Enter Account Number : ";
            cin >> usr_accn;
            for (i = 0; i <= 9; i++) {
                found = D[i].Search(usr_accn);
                if (found) {
                    D[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw 
            cout << "Please Enter Account Number:";
            cin >> usr_accn;
            for (i = 0; i <= 9; i++) {
                found = D[i].Search(usr_accn);
                if (found) {
                    D[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // exit
            cout << "Thank You" << endl;
            break;
        default:
            cout << "Please choose correct  Option" << endl;
        }
    } while (ch != 5);
    return 0;
}
