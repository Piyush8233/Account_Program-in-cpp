// Project to show account details
#include <iostream>
#include <cstdlib>
using namespace std;

class account
{
    int accono;
    string name;
    float balance;

public:
    void setdata();
    void showdata();
    void check_balance();
    void withdraw_money();
    void deposite_money();
};

void account ::setdata()
{
    cout << "Enter account number : ";
    cin >> accono;
    fflush(stdin);
    cout << "Enter Account Holder name : ";
    cin >> name;
    fflush(stdin);
    cout << "Enter account balance : ";
    cin >> balance;
}

void account ::showdata()
{
    char c;
    cout << "\nAccount details of " << name << " is \n";
    cout << "Account Holder name is : " << name << endl;
    cout << "Account number is      : " << accono << endl;
    cout << "Account balance is     : " << balance << endl;
    cout << "Are you want to do some deposite or withdraw then click on : Y \n";
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        check_balance();
    }
}

void account ::check_balance()
{
    int press = 0;
    cout << endl;
    cout << "For withdraw Money press : 1\n";
    cout << "For deposite Money press : 2\n";
    cout << "What you want to do that withdraw or deposite : ";
    cin >> press;
    if (press == 1)
        withdraw_money();
    else
        deposite_money();

    cout << endl;
}

void account ::withdraw_money()
{
    float amount;
    if (balance >= 100)
    {
        cout << "Enter the amount : ";
        cin >> amount;
        balance -= amount;
        cout << "Now your balance is : " << balance << endl;
    }
    else
    {
        cout << "Your are not available to withdraw money because of your low balance " << endl;
        cout << "Your balance is : " << balance;
    }
}

void account ::deposite_money()
{
    float amount;
    cout << "Enter the amount : ";
    cin >> amount;
    balance += amount;
    cout << "Now your balance is : " << balance << endl;
}

int main()
{
    int n;
    char c;
    cout << "How much holders you want to store information of account : ";
    cin >> n;
    system("cls");
    account a[n];
    cout << "To fill the information of in all account press : Y othewise click on : N \n";
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        for (int i = 0; i < n; i++)
            a[i].setdata();
    }
    cout << "To show all account information press on : S otherwise click on : N \n";
    cin >> c;
    if (c == 's' || c == 'S')
    {
        for (int i = 0; i < n; i++)
            a[i].showdata();
    }
    return 0;
}