#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        float n;
        cin >> n;

        if (n / 4 == int(n / 4))
            cout << "Good" << endl;
        else
            cout << "Not Good" << endl;
    }

    return 0;
}