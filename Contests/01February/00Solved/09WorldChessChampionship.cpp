#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int x;
	string s;
	cin >> x >> s;

	int n{0}, c{0}, d{0};

	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'C'){
			c += 2;
		}
		else if(s[i] == 'N'){
			n += 2;
		}
		else {
			d++;
		}
	}

	if(c > n)
		cout << 60 * x << endl;
	else if(c < n)
		cout << 40 * x << endl;
	else
		cout << 55 * x << endl;
	
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