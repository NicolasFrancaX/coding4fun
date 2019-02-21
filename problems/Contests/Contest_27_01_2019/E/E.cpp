#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

double time(int d, int v) {
	return (d+0.0)/v;
}

int main() {
	int D, VF, VG;
	double tf, tg;
	double h;

	bool flag;

	while (cin >> D >> VF >> VG) {
		flag = false;
		
		/*
		*/

		for (int i = 0; i <= 12; i++) {
			h = sqrt(i*i+D*D);
			tf = time(i, VF);
			tg = time(h, VG);

			if (tg <= tf) {
				cout << "S" << endl;
				flag = true;
				break;
			} 	
		}

		if (!flag) {
			cout << "N" << endl;
		}
	}

	return 0;
}
