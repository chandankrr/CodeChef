#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int arr[n];
        int ct = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            
            if (arr[i] >= 10 && arr[i] <= 60)
                ct++;
        }

        cout << ct << endl;
    }

    return 0;
}