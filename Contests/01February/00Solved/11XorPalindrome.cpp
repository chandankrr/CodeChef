#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int n;
	string s;
	cin >> n >> s;

	int a{0}, b{0};
	for(int i = 0; i < n; i++){
		if(s[i] == '0')
			a++;
		else
			b++;
	}

	if(n % 2 == 0){
		if(a == b)
			cout << "YES" << endl;
		else if(a % 2 == 0 && b % 2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else
		cout << "YES" << endl;

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