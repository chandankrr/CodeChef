#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long int ll;

bool isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 201, i = 2;
    int prime[n];

    for(i = 2; i < n; i++){
        if(isPrime(i)){
            prime[i] = 1;
        }
    }

    for(int j = 0; j < n; j++){
        cout << prime[i] << endl;
    }

    // int allPrimes[]

    // for(i; i < n; i++){
    //     for(int j = i; j <= n; j++)
    // }


    // int t;
    // cin >> t;
    // while(t--) {
        
    // }

}