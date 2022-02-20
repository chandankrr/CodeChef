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

		int score[n];
		for(int i = 0; i < n; i++){
			cin >> score[i];
		}

		int max = score[0];

		for(int i = 0; i < n; i++){
			if(score[i] > max)
				max = score[i];
		}

		int countMax{0};

		for(int i = 0; i < n; i++){
			if(score[i] == max)
				countMax++;
		}

		cout << ((countMax > 1) ? "fight:(" : "peace:)" )<< endl;

	}
}