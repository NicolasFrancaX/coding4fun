// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1015

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
	return sqrt( ( (x2-x1)*(x2-x1) ) + ( (y2-y1)*(y2-y1) ) );
}

int main() {
	double x1, y1;
	double x2, y2;


	while (cin >> x1 >> y1 >> x2 >> y2) {
		cout << fixed << setprecision(4) << distance(x1, y1, x2, y2) << endl;
	}

	return 0;
}
