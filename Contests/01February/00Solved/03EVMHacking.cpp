#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int a, b, c, p, q, r;
	cin >> a >> b >> c >> p >> q >> r;

	int half_EVM = (p+q+r)/2;

	if(p+b+c > half_EVM || a+q+c > half_EVM || a+b+r > half_EVM)
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