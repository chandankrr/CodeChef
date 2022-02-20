#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int m, x, y;
		cin >> m >> x >> y;
		int arr[m]{0};

		for(int i = 0; i < m; i++){
			cin >> arr[i];
		}

		int dist = x * y;

		int count = 0;
		for(int i = 1; i <= 100; i++){
			bool safe = true;
			for(int j = 0; j < m; j++){
				int leftRange = max(arr[j] - dist, 1);
				int rightRange = min(arr[j] + dist, 100);

				if(i >= leftRange && i <= rightRange){
					safe = false;
				}
			}
			if(safe)
				count += 1;
		}

		cout << count << endl;

	}
}