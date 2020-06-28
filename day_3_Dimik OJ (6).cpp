#include<bits/stdc++.h>
using namespace std;

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int cases, n, result;
	cin >> cases;
	while (cases--)
	{
		cin >> n;
		result = n % 10 + (n / 10000) % 10000;
		cout << "Sum = " << result << endl;



	}


	return 0;
}