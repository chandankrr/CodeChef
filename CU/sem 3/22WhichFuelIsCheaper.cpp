#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--) {
		int x, y, a, b, k;
		cin >> x >> y >> a >> b >> k;

		int ans1 = x + a;
		int ans2 = y + b;

		while(k--){
			ans1 += a;
			ans2 += b;
		}

		if(ans1 > ans2)
			cout << "DIESEL" << endl;
		else if(ans1 < ans2)
			cout << "PETROL" << endl;
		else if(ans1 == ans2)
			cout << "SAME PRICE" << endl;

	}
}