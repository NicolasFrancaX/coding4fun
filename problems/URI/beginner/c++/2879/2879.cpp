#include <iostream>

using namespace std;

int main() {
	int N;
	int sum = 0;
	int a;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a;

		if (a != 1) 
			sum++;
	}

	cout << sum << endl;

	return 0;
}
