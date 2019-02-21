#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

int comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second > p2.second) return 0;
    return 1;
}

int main() {
    int N, M;
    int input;

    while (cin >> N >> M && N+M) {
        int f_1 = 0;
        int f_2 = 0;
        int f_3 = 0;
        int f_4 = 0;

        int max_prob;
        int min_prob;
        int max_per;
        int min_per;

        map<int, int> problems;
        map<int, int> person; 

        vector<pair<int, int>> v_problems;
        vector<pair<int, int>> v_person;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> input;
                if (input) {
                    problems[j]++;
                    person[i]++;
                } else {
                    problems[j] = problems[j];
                    person[i] = person[i];
                }
            }

        }

        for (auto it = problems.begin(); it != problems.end(); it++) {
            v_problems.push_back(*it);
        }

        for (auto it = person.begin(); it != person.end(); it++) {
            v_person.push_back(*it);
        }

        sort(v_problems.begin(), v_problems.end(), comp);
        sort(v_person.begin(), v_person.end(), comp);


        min_prob = (*(v_problems.begin())).second;
        min_per = (*(v_person.begin())).second;
        max_prob = (*(v_problems.end()-1)).second;
        max_per = (*(v_person.end()-1)).second;

        if (max_per != M) {
            f_1 = 1;
        }

        if (min_prob > 0) {
            f_2 = 1;
        }

        if (max_prob != N) {
            f_3 = 1;
        }

        if (min_per > 0) {
            f_4 = 1;
        }

        cout << f_1+f_2+f_3+f_4 << endl;
    }

    return 0;
}