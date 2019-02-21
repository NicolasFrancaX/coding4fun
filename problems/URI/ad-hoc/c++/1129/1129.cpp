#include <iostream>

using namespace std;

char answer(int a, int b, int c, int d, int e) {
	bool b_a, b_b, b_c, b_d, b_e;
	int count = 0;

	if (a <= 127) {
		b_a = true;
		count++;
	} else {
		b_a = false;
	}

	if (b <= 127) {
		count++;
		b_b = true;
	} else {
		b_b = false;
	}

	if (c <= 127) {
		count++;
		b_c = true;
	} else {
		b_c = false;
	}

	if (d <= 127) {
		count++;
		b_d = true;
	} else {
		b_d = false;
	}

	if (e <= 127) {
		count++;
		b_e = true;
	} else {
		b_e = false;
	}

	if (count > 1 || count < 1) {
		return '*';
	} 
	
	
	if (b_a) {
		return 'A';
	} 

	if (b_b) {
		return 'B';
	}

	if (b_c) {
		return 'C';
	}

	if (b_d) {
		return 'D';
	}

	if (b_e) {
		return 'E';
	}

	return '*';
}

int main() {
	int N;
	int a, b, c, d, e;

	while (cin >> N && N != 0) {
		while (N--) {
			cin >> a >> b >> c >> d >> e;

			cout << answer(a, b, c, d, e) << endl;
		}
	}

	return 0;
}


