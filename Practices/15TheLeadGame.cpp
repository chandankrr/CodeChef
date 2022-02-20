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

  	int scoreSum1{0}, scoreSum2{0}, lead{0}, dif{0}, winner;

  	while(n--){
  		int pl1, pl2;
  		cin >> pl1 >> pl2;

  		scoreSum1 += pl1;
  		scoreSum2 += pl2;

  		if(scoreSum1 > scoreSum2){
  			dif = scoreSum1 - scoreSum2;
  			if(dif > lead){
  				lead = dif;
  				winner = 1;
  			}

  		}
  		else{
  			dif = scoreSum2 - scoreSum1;
  			if(dif > lead){
  				lead = dif;
	  			winner = 2;
  			}
  		}
  	}

  	cout << winner << " " << lead;
}


int main(){
	std::ios_base::sync_with_stdio(false);

	int tc = 1;
	// cin >> tc;

	while(tc--){
		// cout << "Case #" << t << ": ";
		solve();
	}

	return 0;
}