#include <bits/stdc++.h>

using namespace std;

int main() {
	map<int, string> m;

	m[0] = "PROXYCITY";
	m[1] = "P.Y.N.G.";
	m[2] = "DNSUEY!";
	m[3] = "SERVERS";
	m[4] = "HOST!";
	m[5] = "CRIPTONIZE";
	m[6] = "OFFLINE DAY";
	m[7] = "SALT";
	m[8] = "ANSWER!";
	m[9] = "RAR?";
	m[10] = "WIFI ANTENNAS";

	
	int C;
	int X, Y;

	cin >> C;

	while (C--) {
		cin >> X >> Y;
		cout << m[X+Y] << endl;
	}

	return 0;
}
