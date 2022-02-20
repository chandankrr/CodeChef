#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, revNum = 0;
        cin >> N;

        while (N > 0)
        {
            int lastDigit = N % 10;
            revNum = (revNum * 10) + lastDigit;
            N = N / 10;
        }

        cout << revNum << endl;
    }

    return 0;
}
