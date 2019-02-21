#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    set<string> friends, no_friends;
    string name, answer, friend_hanoi;
    int p = 0;
    unsigned int greater;

    while (cin >> name && name != "FIM") {
        cin >> answer;

        if (p++ == 0) {
            friend_hanoi = name;
            greater = name.size();
        }
        if (greater < name.size() && answer == "YES") {
            friend_hanoi = name;
            greater = friend_hanoi.size();
        }

        if (answer == "YES") {
            friends.insert(name);
        } else {
            no_friends.insert(name);
        }

    }

    for (set<string>::iterator it = friends.begin(); it != friends.end(); it++) {
        cout << *it << endl;
    }

    for (set<string>::iterator it = no_friends.begin(); it != no_friends.end(); it++) {
        cout << *it << endl;
    }

    cout << endl << "Amigo do Habay:" << endl;
    cout << friend_hanoi << endl;
    return 0;
}