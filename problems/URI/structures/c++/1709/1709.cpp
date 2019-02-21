#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void shuffling(vector<int> *v) {
    vector<int> aux;
    int x = (*v).size();
    int n = (*v).size()/2;

    for (int i = 0; i < n; i++) {
        aux.push_back((*v)[n+i]);
        aux.push_back((*v)[i]);
    }

    *v = aux;
}

int main() {
    vector<int> v1;
    vector<int> v2;

    int n;
    int passos = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        v1.push_back(i);
        v2.push_back(i);
    }


    shuffling(&v1);

    while (v1 != v2) {
        passos++;
        shuffling(&v1);
    }

    cout << passos << endl;
    return 0;    

}