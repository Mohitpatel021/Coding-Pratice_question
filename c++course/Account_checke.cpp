#include <iostream>
using namespace std;
int main()
{
    cout << "##############......Welcome in APPKO LUTNE WALE BANK......########### " << endl;

    int account_number;
    char account_type;
    double account_balance;
    double minimum_balance;
    cout << "Enter your account number: " << endl;
    cin >> account_number;
    cout << "Enter your account type:" << endl;
    cin >> account_type;
    cout << "Enter minimum balance" << endl;
    cin >> minimum_balance;
    cout << "Enter your account balance:" << endl;
    cin >> account_balance;
    if (account_balance < minimum_balance)
    {
        cout << "/n .....The account balance is less than the minimum balance. In that case you will be pay service charge......." << endl;
        cout << "....................................THANKYOU..................................." << endl;
        if (account_type == 's' || account_type == 'S')
        {
            cout << "Note:- you will be charge $10.00 for customer hold saving account" << endl;
        }
        else if (account_type == 'c' || account_type == 'C')
        {
            cout << "Note:-you will be charge $25.00 for customer hold checking account" << endl;
        }
    }
    else
    {
        cout << "Note:- Customer maintain minimum balance in account" << endl;
        if (account_type == 's' || account_type == 'S')
        {
            cout << "Note:-coustomer applicable to get 4% ROI per year" << endl;
        }
        else if (account_type == 'c' || account_type == 'C')
        {

            if (account_balance <= 5000)
            {

                cout << "Note:-Customer applicable to get 3% ROI in every month end" << endl;
            }
            else

            {
                cout << "Note:-Coustomer applicable to get 5% ROI in every month end" << endl;
            }
        }
    }

    return 0;
}