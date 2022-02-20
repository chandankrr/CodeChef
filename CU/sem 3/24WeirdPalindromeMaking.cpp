#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int arr[n];

		for(int i = 0; i < n; i++)
			cin >> arr[i];

		int countOdd = 0;

		for(int i = 0; i < n; i++) {
			if (arr[i] % 2 != 0)
				countOdd++;
		}

		cout << (countOdd / 2) << endl;
	}
}