#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int A[n];

		for(int i = 0; i < n; i++){
			cin >> A[i];
		}

		int count{0}, ans{0};

		for(int i = 0; i < n; i++){
			if(A[i] % 2 == 0){
				count++;
				ans = max(ans, count);
			}
			else
				count = 0;
		}

		ans = max(ans, count);

		cout << ans << endl;
	}
}