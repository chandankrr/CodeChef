// Problem
// Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.
// Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1, A2, ......An.For each given test case tell whether the given sequence will be liked by Jiya.

// INPUT FORMAT -
// First line constains t number of test cases.
// Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

// OUTPUT FORMAT -
// Print "YES" or "NO", whether Jiya likes the sequence or not.

// CONSTRAINTS -
// 1≤t≤100
// 1≤n≤15
// 1≤Ai≤10, for all i

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		long long product = 1;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			product = product * x;

		}

		int lastDigit = product % 10;
		if (lastDigit == 2 || lastDigit == 3 || lastDigit == 5)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}

// input:
// 2
// 5
// 2 2 2 2 2
// 4
// 2 2 2 2