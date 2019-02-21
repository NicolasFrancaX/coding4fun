// Problem: http://acm.timus.ru/print.aspx?space=1&num=1877

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s_a, s_b;

	while (cin >> s_a >> s_b) {
		// Se a primeira chave for par, uma hora ou outra o ladrão vai conseguir quebra-lá
		// Se a segunda chave for impar, uma hora ou outra o ladrão vai conseguir quebra-lá
		// Como ele já conseguiu quebrar uma delas, a outra vai ser quebrada por brute-force
		if (stoi(s_a) % 2 == 0 || stoi(s_b) % 2 == 1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;

}
