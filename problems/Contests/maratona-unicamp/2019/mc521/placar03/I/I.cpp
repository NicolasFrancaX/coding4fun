#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int resolve(string s, int d) {
        string substring;
        set<string> S;

	for (unsigned int i = 0; i < s.length(); i += d) {
		substring = "";
		for (unsigned int j = i; j < i+d; j++) {
			substring.append(1u, s[j]);
		}

		S.insert(substring);
	}

        return S.size();
}

int main() {
        string S;
        char first;
	bool gate;

        while (cin >> S && !(S.length() == 1 && S[0] == '*')) {
		gate = false;

                first = S[0];

                for (unsigned int i = 1; i < S.length(); i++) {
                        if (S[i] == first) {
                                if (resolve(S, i) == 1) {
					cout << S.length()/i << endl;
					gate = true;
					break;
				}
                        }
                }

		if (!gate) cout << 1 << endl;
        }

        return 0; 
}       

