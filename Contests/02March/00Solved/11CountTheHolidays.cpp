#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int ct = 0;
        int arr[n];

        // 6, 13, 20, 27 - saturday
        // 7, 14, 21, 28 - sunday
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 7 != 0 && arr[i] % 7 != 6)
                ct--;
        }

        for (int i = 1; i < 31; i++) {
            if (i % 7 == 0 || i % 7 == 6)
                ct--;
        }

        cout << -ct << endl;
    }

    return 0;
}