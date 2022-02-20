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

		int sum1{0}, sum2{0};

		for(int i = 0; i < n; i++){
			if(i % 2 == 0)
				sum1 = sum1 + A[i];
			else
				sum2 = sum2 + A[i];
		}

		cout << (sum1 > sum2 ? sum1 : sum2) << endl;
		
	}
}	