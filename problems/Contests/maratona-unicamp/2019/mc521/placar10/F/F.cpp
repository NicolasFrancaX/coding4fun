#include <bits/stdc++.h>

using namespace std;

typedef long long ull;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string equation;
	string new_equation;

	while (cin >> equation) {
		cout << equation << endl;
		vector<int> C;
		vector<int> Exp;

		vector<int> C_N;
		vector<int> Exp_N;

		new_equation = "";

		for (auto it = equation.begin(); it != equation.end(); it++) {
			if (*it == '+' || *it == '-') {
				new_equation.append(1u, ' ');	
				new_equation.append(1u, *it);
			} else new_equation.append(1u, *it);
		}	

		cout << new_equation << endl;


		stringstream ss(new_equation);
		string mono;

		while (ss >> mono) {
			cout << mono << endl;
			int Cof;
			int E;
			for (unsigned int i = 0; i < mono.length(); i++) {
				if (mono[i] == 'x') mono[i] = ' ';
			}

			stringstream ssi(mono);
			string aux_cof;
		
			ssi >> aux_cof;


			stringstream sssi(aux_cof);

			sssi >> Cof; 

			if (aux_cof[0] == '-' && Cof == 0) {
				Cof = -1;
			} else if (aux_cof[0] == '+' && Cof == 0) {
				Cof = +1;
			}
			

			C.push_back(Cof);
			ssi >> E; 
			Exp.push_back(E);

			C_N.push_back(Cof*E); Exp_N.push_back(E-1);

			cout << "Cof: " << Cof*E << endl;
			cout << "Exp: " << E-1 << endl;
		}

	}

	return 0;
}

