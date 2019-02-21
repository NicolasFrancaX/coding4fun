#include <iostream>
#include <vector>

using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int bubbleSort(vector<int> arr, int n) {
    int i, j;
    int swaps = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swaps++;
            }
        }
    }

    return swaps;
}

int main() {
    int N;
    int aux;
    vector<int> v;

    cin >> N;

    while (N--) {
        int L;

        cin >> L;

        while (L--) {
            cin >> aux;
            v.push_back(aux);
        }


        cout << "Optimal train swapping takes " << bubbleSort(v, v.size()) << " swaps." << endl;


        v.clear();
    }

    return 0;
}