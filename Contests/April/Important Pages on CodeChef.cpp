#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == 1 && b == 1)
        cout << "https://discuss.codechef.com";

    else if (a == 0)
        cout << "https://www.codechef.com/practice" << endl;

    else
        cout << "https://www.codechef.com/contests" << endl;

    return 0;
}