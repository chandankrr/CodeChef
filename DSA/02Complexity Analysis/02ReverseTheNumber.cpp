#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i,k,n) for (int i = k; i < n; ++i)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;

	int reverseNum = 0;

	while(n > 0){
		int lastDigit = n % 10;
		reverseNum = (reverseNum * 10) + lastDigit;
		n = n / 10;
	}

	cout << reverseNum << endl;
}

int main(){
	std::ios_base::sync_with_stdio(false);

	int tc = 1;
	cin >> tc;

	while(tc--){
		// cout << "Case #" << t << ": ";
		solve();
	}

	return 0;
}