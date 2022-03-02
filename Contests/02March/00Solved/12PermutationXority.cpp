#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int arr[n];
        if (n == 2) {
            cout << -1 << endl;
            exit(0);
        }

        if (n % 2 == 1) {
            int a = n;
            for (int i = 0; i < n; i++) {
                cout << a << " ";
                a--;
            }
            cout << endl;
            exit(0);
        }

        int b = 1;
        for (int i = 0; i < n; i++) {
            arr[i] = b;
            b++;
        }
        arr[0] = 2;
        arr[1] = 3;
        arr[2] = 1;

        for (int i : arr)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}