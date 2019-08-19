#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	string number;
	long long int int_number;
	long long int N;

	cin >> T;

	while (T--) {
		stringstream ss;
		cin >> number;
		ss << number;
		ss >> N;

		int_number = 0;

		for (int i = 0; i < number.length(); i++) {
			int_number += pow(number[i]-'0', number.length());
		}

		if (N == int_number) cout << "Armstrong" << endl;
		else cout << "Not Armstrong" << endl;
	}


	return 0;
}
