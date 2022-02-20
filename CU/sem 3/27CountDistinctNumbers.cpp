#include <bits/stdc++.h>
using namespace std;

void distinctCount(int arr[], int k, int n)
{
    unordered_map<int, int> m;
    int dist_count = 0;
    for (int i = 0; i < k; i++)
    {
        if (m[arr[i]] == 0)
        {
            dist_count++;
        }
        m[arr[i]] += 1;
    }

    cout << dist_count << " ";
    for (int i = k; i < n; i++)
    {
        if (m[arr[i - k]] == 1)
        {
            dist_count--;
        }
        m[arr[i - k]] -= 1;
        if (m[arr[i]] == 0)
        {
            dist_count++;
        }
        m[arr[i]] += 1;
        cout << dist_count << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        distinctCount(a, k, n);
    }

    return 0;
}