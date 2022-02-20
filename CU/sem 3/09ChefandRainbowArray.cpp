#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int start = 0, last = n - 1;
		bool rainbow = true;

		if(arr[0] != 1) {
			rainbow = false;
		}

		while(start < last){
			if (arr[start] != arr[last]) {
				rainbow = false;
				break;
			}

			if(arr[start] != arr[start + 1] && arr[start + 1] != arr[start] + 1) {
				rainbow = false;
				break;
			}
			start++;
			last--;
		}

		if(arr[start] != 7){
			rainbow = false;
		}

		cout << (rainbow ? "yes" : "no") << endl;
	}
}