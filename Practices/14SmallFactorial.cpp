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

	int fact = 1;
	for(int i = 1; i <= n; i++){
		fact *= i;
	}

	cout << fact << endl;
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