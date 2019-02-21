#include <bits/stdc++.h>

using namespace std;

int main() {
	string T;

	getline(cin, T);

	if (T.length() <= 140) cout << "TWEET" << endl;
	else cout << "MUTE" << endl;
	
	return 0;
}
