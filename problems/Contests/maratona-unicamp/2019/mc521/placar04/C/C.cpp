#include <bits/stdc++.h>

using namespace std;

string::iterator it_aux;
string Wf;

int state;

bool search(string &S, char c) {
	it_aux = find(S.begin(), S.end(), c);	


	if (it_aux != S.end()) {
		S.erase(it_aux);
		
		return true;
	}

	return false;
}

int main() {
	string W; // Word
	string Wd = ""; // Word definitive
	Wf = "";

	cin >> W;

	for (auto it = W.begin(); it != W.end(); it++)
		if (*it == 'n' || *it == 'i' || *it == 'e' || *it == 't')
			Wd.append(1u, *it);

	int r = 0;
	state = 0; // estado de inicializacao

	// state = 10 -> sai

	// N -> I -> N -> E -> T -> E -> E -> N -> I -> ...
	// 0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 0 -> 1 -> ...
	//
	//

	string Wx = Wd;	

	bool door = false;

	for (unsigned int i = 0; i < Wd.length(); i++) {
		switch (state) {
			case 0:
				if (search(Wx, 'n')) {
					state = 1;

					if (door) r++;
				} else state = 10;
					
				break;

			case 1:
				if (search(Wx, 'i')) {
					state = 2;
				} else state = 10;
				break;

			case 2:
				if (search(Wx, 'n')) {
					state = 3;
				} else state = 10;
				break;

			case 3:
				if (search(Wx, 'e')) {
					state = 4;
				} else state = 10;
				break;

			case 4:
				if (search(Wx, 't')) {
					state = 5;
				} else state = 10;
				break;

			case 5:
				if (search(Wx, 'e')) {
					state = 6;
				} else state = 10;
				break;

			case 6:
				if (search(Wx, 'e')) {
					state = 0;
					door = true;
				} else state = 10;
				break;
			case 10:
				break;
		}
	}	

	cout << r << endl;

	return 0;
}

