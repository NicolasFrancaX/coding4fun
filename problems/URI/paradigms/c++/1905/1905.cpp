#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int maze[5][5];
bool visiteds[5][5];
bool finded;

int control[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

void dfs(int x, int y) {
    if (x == 4 && y == 4) {
        visiteds[x][y] = true;
    }

    if (maze[x][y])
        return;

    if (x < 0 || x >= 5 || y < 0 || y >= 5)
        return;

    if (visiteds[x][y])
        return;

    visiteds[x][y] = true;


    for (int i = 0; i < 4; i++)
        dfs(x+control[i][0], y+control[i][1]);

}

int main() {
    int N;
    string blank_line;

    cin >> N;

    while (N--) {
        finded = false;

        /*
        cin.ignore(100, '\n');
        getline(cin, blank_line);
        */

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> maze[i][j];
                visiteds[i][j] = false;
            }
        }

        dfs(0, 0);

        if (visiteds[4][4]) cout << "COPS" << endl;
        else cout << "ROBBERS" << endl;
    }

    return 0;
}