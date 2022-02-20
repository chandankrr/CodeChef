#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

bool conditionSort(const pair<ull, ull> &a, const pair<ull, ull> &b){
	if(a.second == b.second)
		return a.first < b.first;
	else
		return a.second > b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ull N;
	cin >> N;

	ull A[N], B[N];
	vector<pair <ull, ull>> v;

	for(ull i = 0; i < N; i++)
		cin >> A[i];
	
	for(ull i = 0; i < N; i++)
		cin >> B[i];

	for(ull i = 0; i < N; i++)
		v.push_back(make_pair(A[i], B[i]));

	sort(v.begin(),v.end(), conditionSort);
	for(ull i = 0; i < N; i++){
		cout << v[i].first << " " << v[i].second << " ";
	}

	return 0;
	
}