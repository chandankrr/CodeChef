#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int x, y;
        cin >> x >> y;

        if (y * 30 <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}