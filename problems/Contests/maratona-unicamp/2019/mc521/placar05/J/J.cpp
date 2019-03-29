#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	int N;
	int sum = 0;
	int in = 1;
	
	scanf("%d ",&N);
	
	int V[N-1];
	int i;
	for(i = 0;; i++) {
		scanf("%d ",&in);
		//cin >> in; 
		V[i] = in;
		sum+=in;
		if (in == 0)
			break;
	}

	if (sum < N) {
		printf("YES\n");
		/* i = player a matar */
		/* comecando pelo com kills !=0 */
		for(/*i = ultimo*/; i >= 0 ; i--) {
			/* V[i] numero de kills do player faltantes */
			while(V[i]--) {
				/* N = player a ser morto */
				printf("%d %d\n",i+1,N); N--;
			}
		}
	}
	else {
		printf("NO\n");
		return 0;
	} 

	return 0;
}
