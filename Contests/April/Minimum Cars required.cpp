#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        if (n % 4 == 0) {
            cout << n / 4 << endl;
        } else
            cout << n / 4 + 1 << endl;
    }

    return 0;
}