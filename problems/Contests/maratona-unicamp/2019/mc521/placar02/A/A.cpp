#include <bits/stdc++.h>

using namespace std;

long long result;

bool f(string n) {
	set<long long> s;

	long long aux_result = 0;

	for (auto it = n.begin(); it != n.end(); it++) {
		s.insert(*it - '0');
		aux_result += *it - '0';
	}

	result = aux_result;

	return result / 10 < 1;
}

long long g(string n) {
	string a;

	a = n;
	
	while (!f(a)) {
		//cout << result << endl;
		a = to_string(result);
	}

	return result;
}

int main() {
	string number;

	while (cin >> number) {
		result = -1;

		if (number == "0") break;

		cout << g(number) << endl;
	}

	return 0;
}
