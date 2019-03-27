#include <bits/stdc++.h>

using namespace std;


/*
 * Notes about the problem:
 *
 * 	- very very large screen and a single button;
 * 	- When he found the machine, the screen displayed only the letter A;
 * 	- After he pressed the button, the letter changed to B;
 * 	- all the letters B get transformed to BA;
 * 	- all the letters A get transformed to B;
 *
 * 	- Problem:
 * 		- After K times of pressing the button, how many letters A and how much letters
 * 		B will be displayed on the screen?
 *
 * 	- Input:
 * 		- (1 <= K <= 45)
 *
 */

typedef long long ull; 

ull fib[1000];

ull fibonacci(int n) {
	return fib[n-1];
}

int main() {
	/* Pre-inicialization */
	fib[0] = 0; // <- fibonacci(1) -> fib[0]
	fib[1] = 1; // <- fibonacci(2) -> fib[1]

	for (int i = 2; i < 1000; i++) 
		fib[i] = fib[i-1]+fib[i-2];

	/* END Pre-inicialization */

	int K;

	while (cin >> K)
		cout << fibonacci(K) << " " << fibonacci(K+1) << endl;

	return 0;
}


