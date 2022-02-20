#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define cinArr(n) for(ll x = 0; x < n; x++) cin >> arr[x]
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        while(n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
         
        cout << sum <<endl;
        
    }
    
    return 0;
}