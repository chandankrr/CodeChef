#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int arr[n];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int x = 1, ans = 0;
        while(sum > 0){
            sum -= x;
            ans += 1;
            x += 1;
        }

        if(sum < 0)
            cout << ans - 1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}