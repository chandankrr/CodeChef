#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int arr[n];
	for(int i = 0; i < n; i++)
		arr[i] = a[i];

	sort(arr, arr + n);

	int ct{0};
	for(int i = 0; i < n; i++){
		for(int j = n - 1; j > i; j--){
			if(a[i] & a[j] == 0){
				continue;
			}
			else{
				if(a[i] > a[j]){
					int tmp = a[j];
					a[j] = a[i];
					arr[i] = tmp;
				}
				else{
					continue;
				}
			}
		}
	}

	for(int i = 0; i < n; i++){
		if(a[i] != arr[i]){
			ct = 1;
			break;
		}
	}

	if(ct == 0)
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