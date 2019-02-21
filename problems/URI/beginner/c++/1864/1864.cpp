#include <iostream>
#include <string>

using namespace std;

int main() {
    string sk = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int N;

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cout << sk[i];
    }

    cout << endl;

    return 0;
}