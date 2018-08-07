// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1002

#include <iostream>
#include <iomanip> // std::setprecision

#define PI 3.14159

using namespace std;

int main() {
	double R;

	while (cin >> R) {
		cout << "A=" << fixed << setprecision(4) << PI * R * R << endl;
	}

	return 0;
}
