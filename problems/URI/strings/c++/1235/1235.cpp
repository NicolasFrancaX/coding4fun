#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
	int N;
	char expression[252];

	cin >> N;


	cin.getline(expression, 0);
	for (int i = 0; i < N; i++) {
		cin.getline(expression, 252);

		for (int j = strlen(expression)/2 - 1; j >= 0; j--) {
			cout << expression[j];
		}

		for (unsigned int j = strlen(expression)-1; j >= strlen(expression)/2; j--) {
			cout << expression[j];
		}

		cout << endl;
	}

	return 0;
}
