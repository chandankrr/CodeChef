#include <iostream>
using namespace std;

int main() {
    for (int t = 0; t < 1; t++) {
        int n;
        cin >> n;

        if (n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        cout << 0 << " " << n / 2 << endl;
        cout << n / 2 << " " << 0 << endl;
        cout << 0 << " " << -(n / 2) << endl;
        cout << -(n / 2) << " " << 0 << endl;
    }

    return 0;
}