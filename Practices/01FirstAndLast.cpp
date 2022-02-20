#include <bits/stdc++.h>
using namespace std;

int firstDigit(int x)
{
    int r;
    while (x > 0)
    {
        r = x % 10;
        x = x / 10;
    }
    return r;
}

int lastDigit(int x)
{
    return (x % 10);
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, sum = 0;
        cin >> N;

        sum = firstDigit(N) + lastDigit(N);
        cout << sum << endl;
    }

    return 0;
}
