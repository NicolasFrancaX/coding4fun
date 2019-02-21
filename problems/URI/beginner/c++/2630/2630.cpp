#include <bits/stdc++.h>

using namespace std;

int min(int a, int b, int c);
int max(int a, int b, int c);
int mean(int a, int b, int c);
int eye(int a, int b, int c);

int min(int a, int b, int c) {
	return min(min(a, b), c);
}

int max(int a, int b, int c) {
	return max(max(a, b), c);
}

int mean(int a, int b, int c) {
	return (int)(( a+b+c+0.0 )/3);
}

int eye(int a, int b, int c) {
	double value = (0.3*a)+(0.59*b)+(0.11*c);
	return (int)value;
}

int main() {
	int T;
	string conversion;

	int C = 1;

	int state;

	int R, G, B;
	
	cin >> T;

	while (T--) {
		cin >> conversion;

		if (conversion == "min") state = 0;
		else if (conversion == "max") state = 1;
		else if (conversion == "mean") state = 2;
		else if (conversion == "eye") state = 3;
		
			
		cin >> R >> G >> B;
		
		cout << "Caso #" << C++ << ": ";

		switch(state) {
			case 0:
				cout << min(R, G, B) << endl;
				break;
			case 1:
				cout << max(R, G, B) << endl;
				break;
			case 2:
				cout << mean(R, G, B) << endl;
				break;
			case 3:
				cout << eye(R, G, B) << endl;
				break;
		}	
	}

	return 0;
}
