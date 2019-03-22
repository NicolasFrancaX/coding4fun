#include <bits/stdc++.h>

using namespace std;

int main() {
	int in;

	int a, b, c;

	// a b c <- ordenado
	// queremos achar x
	// caso 1: a x b c <- b-a > c-b && x-a == b-x == c-b => x = a+(c-b)
	// caso 2: a b x c <- c-b > b-a && b-a == x-b == c-x => x = b+(b-a)
	// caso 3: a b c x <- b-a == c-b -> x = c+(c-b);

	while (cin >> in) {
		vector<int> v;

		v.push_back(in);
		cin >> in; v.push_back(in);
		cin >> in; v.push_back(in);

		sort(v.begin(), v.end());

		a = v[0]; b = v[1]; c = v[2];

		if (b-a == c-b) cout << c+(c-b) << endl;
		else if (b-a > c-b) cout << a+(c-b) << endl;
		else if (c-b > b-a) cout << b+(b-a) << endl;
	}

	return 0;
}
