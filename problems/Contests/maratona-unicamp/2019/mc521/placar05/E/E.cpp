#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>

using namespace std;

typedef long long ll;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	// Write code here:
	int n;
	int in;
	int ni, nd;

	bool flag;

	int pi;
	int pd;
	

	while (cin >> n) {
		vector<int> V;
		set<int> Si, Sd;
		priority_queue<int, vector<int>, less<int>> Pi;
		priority_queue<int, vector<int>, greater<int>> Pd;

		ni = nd = 0;
		flag = true;
		pi = pd = 0;


		for (int i = 0; i < n; i++) {
			cin >> in;

			if (find(Si.begin(), Si.end(), in) == Si.end()) {
				Si.insert(in);
				Pi.push(in);
				ni++;
			} else if (find(Sd.begin(), Sd.end(), in) == Sd.end()) {
				Sd.insert(in);
				Pd.push(in);
				nd++;
			} else {
				flag = false;
			}
		}


		if (flag) {
			cout << "YES" << endl;

			cout << nd << endl;
			while (!Pd.empty()) {
				if (pd++ == 0) cout << Pd.top();
				else cout << " " << Pd.top();

				if (Sd.size() == 0) {
					cout << " ";
				}

				Pd.pop();
			}
			cout << endl;
			cout << ni << endl;
			while (!Pi.empty()) {
				if (pi++ == 0) cout << Pi.top();
				else cout << " " << Pi.top();

				Pi.pop();
			}
			cout << endl;

		}
		else cout << "NO" << endl;

	}


	return 0;
}
