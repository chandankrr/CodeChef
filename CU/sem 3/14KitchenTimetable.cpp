#include <bits/stdc++.h>
#define cinArr(n) for(ll x = 0; x < n; x++) cin >> arr[x]
#define MOD 1000000007
typedef long long int ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int A[n], B[n];

        for(int i = 0; i < n; i++)
        	cin >> A[i];

        for(int i = 0; i < n; i++)
        	cin >> B[i];
        
        int count{0};
        if(A[0] >= B[0]) 
        	count++;

        for(int i = 1; i < n; i++){
        	if(A[i]-A[i-1] >= B[i]) 
        		count++;
        }
        cout << count << endl;
    }

}