#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long sum = 0;
        long a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++){
            sum += a[i];
            b[i] = sum;
        }

        long ans = sum;
        for (int i = 0; i < n; i++)
            ans = min(max(b[i], sum - b[i]), ans);

        cout << ans << endl;
    }

    return 0;
}