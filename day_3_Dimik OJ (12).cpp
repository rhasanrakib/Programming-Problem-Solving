#include<bits/stdc++.h>
using namespace std;

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int cases, n, result, num;
	cin >> cases;
	while (cases--)
	{
		cin >> num;

		result = 0;
		n = 5;
		while (num / n >= 1) {
			result += (int) num / n;
			n *= 5;
		}
		cout << result << endl;
	}


	return 0;
}