#include <iostream>
#include <string>

using namespace std;

int main() {
    string a = "bla/bla";
    cin >> a;

    a[3] = ' ';

    cout << a << endl;
}