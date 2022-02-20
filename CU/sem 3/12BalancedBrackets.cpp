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
		string s;
		cin >> s;

		int count1{0}, count2{0};

		for(int i = 0; i < n; i++){
			if(s[i] == '('){
				count1++;
			}
			else if(s[i] == ')'){
				count2++;
			}
		}

		cout << min(2*count1, 2*count2) << endl;
	}
}