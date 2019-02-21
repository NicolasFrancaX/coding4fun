#include <bits/stdc++.h>

using namespace std;

int main() {
	int M;

	while (cin >> M) 
		if (M > 360) continue;
		else if ((M%360) >= 0 && (M%360) < 90)
			cout << "Bom Dia!!" << endl;
		else if ((M%360) >= 90 && (M%360) < 180)
			cout << "Boa Tarde!!" << endl;
		else if ((M%360) >= 180 && (M%360) < 270) 
			cout << "Boa Noite!!" << endl;
		else if ((M%360) >= 270 && (M%360) < 360)
			cout << "De Madrugada!!" << endl;

	return 0;
}
