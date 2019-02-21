#include <iostream>

using namespace std;

int modulo(int a) {
    return a > 0 ? a : -a;
}

int ajudante;

void printArr(int arr[], int l, int r) {
    int p = 0;

    for (int i = l; i < r; i++) {
        if (p++ == 0) {
            cout << arr[i];
        } else {
            cout << " " << arr[i];
        }
    }

    cout << endl;
}

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    printArr(arr, 0, ajudante);    
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m+1+j];

    /* Merge the temp arrays back into arr[l..r] */
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Inicial index of merged subarray

    while (i < n1 && j < n2) {
        cout << "L[i]: " << L[i] << endl;
        cout << "R[j]: " << R[j] << endl;
        if (modulo(L[i] - R[j]) == 1) {
            cout << "nao trocou" << endl;
        } if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            k++;
        } else {
            arr[k] = R[j];
            j++;
            k++;
        }

    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

/* l is for left index and r is right index of the(
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overfow
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);

    }
}

int main() {
    int N;
    
    while (cin >> N && N != 0) {
        ajudante = N;
        int v[N+1];

        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }

        mergeSort(v, 0, N);
        printArr(v, 0, N);
    }

    return 0;
}
