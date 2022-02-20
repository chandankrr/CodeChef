#include <iostream>
using namespace std;

int main()
{
    int withdraw_amt;
    float total_balance;

    cin >> withdraw_amt;
    cin >> total_balance;

    if (withdraw_amt % 5 == 0 && (total_balance >= withdraw_amt + 0.50))
    {
        printf("%.2f", total_balance - withdraw_amt - 0.50);
    }
    else
    {
        printf("%.2f", total_balance);
    }

    return 0;
}
