#include <bits/stdc++.h>

using namespace std;

char print_assent(bool v) {
	return v ? 'O' : '#';
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	vector<bool> assents(34);

	fill(assents.begin(), assents.end(), false);
	int k;

	cin >> k;

	for (int i = 0; i < k; i++)
		assents[i] = true;

	printf("+------------------------+\n");
	printf("|%c.%c.%c.%c.%c.%c.%c.%c.%c.%c.%c.|D|)\n", print_assent(assents[0]), 
			print_assent(assents[4]), print_assent(assents[7]), print_assent(assents[10]), 
			print_assent(assents[13]), print_assent(assents[16]), print_assent(assents[19]),
			print_assent(assents[22]), print_assent(assents[25]), print_assent(assents[28]),
			print_assent(assents[31]));

	printf("|%c.%c.%c.%c.%c.%c.%c.%c.%c.%c.%c.|.|\n", print_assent(assents[1]), 
			print_assent(assents[5]), print_assent(assents[8]), print_assent(assents[11]), 
			print_assent(assents[14]), print_assent(assents[17]), print_assent(assents[20]),
			print_assent(assents[23]), print_assent(assents[26]), print_assent(assents[29]),
			print_assent(assents[32]));
	printf("|%c.......................|\n", print_assent(assents[2]));
	printf("|%c.%c.%c.%c.%c.%c.%c.%c.%c.%c.%c.|.|)\n", print_assent(assents[3]), 
			print_assent(assents[6]), print_assent(assents[9]), print_assent(assents[12]), 
			print_assent(assents[15]), print_assent(assents[18]), print_assent(assents[21]),
			print_assent(assents[24]), print_assent(assents[27]), print_assent(assents[30]),
			print_assent(assents[33]));
	printf("+------------------------+\n");


	return 0;
}

