#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int x, a, b;
        cin >> x >> a >> b;

        int ans = (a * 1) + (b * 2);

        if (ans >= x)
            cout << "Qualify" << endl;
        else
            cout << "NotQualify" << endl;
    }

    return 0;
}