#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {
    int maxIdx = n - 1, minIdx = 0;
    int maxElem = arr[n - 1] + 1; // Store max+1 for encoding

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            arr[i] += (arr[maxIdx--] % maxElem) * maxElem;
        else
            arr[i] += (arr[minIdx++] % maxElem) * maxElem;
    }

    for (int i = 0; i < n; i++)
        arr[i] /= maxElem;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
