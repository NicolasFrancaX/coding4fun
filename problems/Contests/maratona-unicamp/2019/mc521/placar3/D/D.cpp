#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x <<  endl;

using namespace std;

typedef long long ull;

int main() {
	int in;
	int sum;
	int difference;

	while (cin >> in) {
		bool door = false;
		int a, b; a = b = -1;

		vector<int> numbers;

		numbers.push_back(in);
		sum = in;

		for (int i = 1; i < 9; i++) {
			cin >> in;
			numbers.push_back(in);
			
			sum += in;
		}

		difference = sum - 100;

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (i != j) {
					if (numbers[i]+numbers[j] == difference) {
						a = i;
						b = j;
						door = true;
						break;
					}
				}

			}

			if (door) break;
		}

		for (int i = 0; i < 9; i++)
			if (i != a && i != b) 
				cout << numbers[i] << endl;
	}

	return 0;
}
