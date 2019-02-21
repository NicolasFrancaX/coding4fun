#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;
#define MIN INT_MIN

using namespace std;



/*
 

   Idéia para resolver:

   Inicialmente vamos ter um vetor com N deques;

   Vamos jogar o valor de cada número da sequência em cima de cada deque.

   Depois vamos percorrer esse vetor de pilhas. 

   	Se o elemento em cima da deque i for maior que o elemento da deque i+1 && a deque i+1 tem apenas 1 elemento:
		Vamos jogar os valores de i em i+1 (de baixo pra cima);

	
   	Se percorrermos todo o vetor de pilhas e nenhuma alteração foi feita, sai da iteração

 */

int main() {
	int N;
	int in;

	bool flag;
	while (cin >> N) {
		flag = true;

		vector<deque<int> > piles;

		while (N--) {
			deque<int> q;
			cin >> in;
			q.push_front(in);
			piles.push_back(q);
		}

		int min;
		vector<deque<int> >::iterator index;
		vector<deque<int> >::iterator ut;

		flag = true;

		while (flag) {
			flag = false;
			if (piles.size() == 1) break;

			min = (*piles.begin()).front();
			index = piles.begin();

			ut = index;

			for (unsigned int i = 1; i < piles.size(); i++) {
				if (min > (*(ut+i)).front() && (*(ut+i)).size() == 1) {
					flag = true;
					for (auto it = (*index).rbegin(); it != (*index).rend(); it++) {
						(*(index+i)).push_front(*it);
						//piles[i].push_front(*it);
						cout << *it << endl;
					}

					piles.erase(index);
				}

				index++;
				min = (*index).front(); 
			}
		}


		cout << piles.size() << endl;
	}

	return 0;
}
