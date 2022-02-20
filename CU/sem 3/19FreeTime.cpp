#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	array<int, 2> alice[n], bob[m];

	for(int i = 0; i < n; i++){
		cin >> alice[i][0] >> alice[i][1];
	}

	for(int i = 0; i < m; i++){
		cin >> bob[i][0] >> bob[i][1];
	}

	sort(alice, alice + n);
	sort(bob, bob + m);

	int alice_p = 0, bob_p = 0;
	int freeTime = 0;

	while(alice_p < n && bob_p < m){
		int tempAlice, tempBob;
		tempAlice = max(alice[alice_p][0], bob[bob_p][0]);
		tempBob = min(bob[bob_p][1], alice[alice_p][1]);

		if(tempBob > tempAlice){
			freeTime = freeTime + tempBob - tempAlice;
		}

		if(alice[alice_p][1] > bob[bob_p][1]){
			bob_p += 1;
		}
		else{
			alice_p += 1;
		}
	}  

	cout << freeTime;

}