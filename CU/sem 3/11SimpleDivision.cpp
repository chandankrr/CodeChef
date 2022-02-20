#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n, x, y;
		cin >> n >> x >> y;

		int A[n];

		for(int i = 0; i < n; i++){
			cin >> A[i];
		}

		int count{0};

		for(int i = 0; i < n; i++){
			if(A[i] <= x && A[i] % y == 0){
				count++;
			}
		}

		cout << count << endl;


	}
}