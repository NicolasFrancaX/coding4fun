// Problem: https://www.codepit.io/#/problems/565e03e7f53fca8c09330b16/view?index=0

#include <iostream>
#include <algorithm>

using namespace std;

// Usar um vetor comum global!
int v_a[200000];
int v_b[200000];
int res[200000];

void printVector(int v[], int qtdElementos) {
	for (int i = 0; i < qtdElementos - 1; i++)
		cout << v[i] << " ";

	cout << v[qtdElementos - 1] << endl;
}

int main() {
	int n, m;
	int aux;

	while (cin >> n >> m) {
		// Input 2ª linha
		for (int i = 0; i < n; i++) {
			cin >> v_a[i];
		}

		// Ordenando v_a
		sort(v_a, v_a + n);

		// Vou usar como interador pro upper_bound
		int* up;

		// Input 3ª linha 
		for (int i = 0; i < m; i++) {
			cin >> v_b[i];

			// Já posso mostrar o output depois de pego esse valor.
			up = upper_bound(v_a, v_a+n, v_b[i]);

			res[i] = distance(v_a, up);
		}

		printVector(res, m);

	}

	return 0;
}
