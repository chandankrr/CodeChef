#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	float ans = pow(0.143 * n, n);
	if((ans - floor(ans)) < 0.5)
		cout << floor(ans) << endl;
	else
		cout << floor(ans) + 1 << endl;
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