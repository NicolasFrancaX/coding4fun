#include <bits/stdc++.h>

using namespace std;

string format_decimal(string decimal) {
	string result = "";
	string aux;
	string xua;

	int n = 0;

	for (auto it = decimal.rbegin(); it != decimal.rend(); it++) {
		if (n == 3) {
			aux = ",";
			aux.append(result);
			result = aux;
			n = 0;
		}

		xua = "";
		xua.append(1u, *it);
		xua.append(result);
		result = xua;


		n++;
	}

	return result;
}

int main() {
	string decimal;
	string after_v;
	int d;

	while (cin >> d) {
		stringstream ss;
		ss << d;
		ss >> decimal;

		cin >> after_v;

		cout << "$" << format_decimal(decimal) << ".";
		cout << setfill('0') << setw(2) << after_v << endl;
	}

	return 0;
}
