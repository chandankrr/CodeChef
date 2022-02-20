#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i,k,n) for (int i = k; i < n; ++i)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;

	int len = s.length();
	int newLen;
	bool isLapindrome = true;

	if(len % 2 == 0)
		newLen = len / 2;
	else
		newLen = (len + 1) / 2;

	rep(i,0,newLen){
		rep(j,newLen,len){
			if(s[i] == s[j]){
				s[j] = '0';
				break;
			}
		}
	}

	for(int i = newLen; i < len; i++){
		if(s[i] != '0')
			isLapindrome = false;
	}

	if(isLapindrome)
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