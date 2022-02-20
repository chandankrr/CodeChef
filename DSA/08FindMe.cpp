#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	bool isExist; 

	for(int i = 0; i < n; i++){
		if(arr[i] == k){
			isExist = true;
			break;
		}
		else
			isExist = false;
	}

	if(isExist)
		cout << "1" << endl;
	else
		cout << "-1" << endl;

	return 0;
}