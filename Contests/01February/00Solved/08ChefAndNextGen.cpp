#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	if(a * b <= x * y)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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