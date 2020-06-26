#include<bits/stdc++.h>
using namespace std;

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int note;
	int note_arr[] = {100, 50, 20, 10, 5, 2, 1};
	int i = 0;
	cin >> note;
	while (i < 7)
	{
		if (note >= note_arr[i])
		{
			cout << (int) note / note_arr[i] << " note(s) of R$ " << note_arr[i] << endl;
			note %= note_arr[i];
		}
		else
		{
			cout << "0 note(s) of R$ " << note_arr[i] << endl;
		}
		i++;
	}

	return 0;
}