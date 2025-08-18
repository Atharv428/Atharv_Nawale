#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int m, int arr2[], int n) {
    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            
            swap(arr1[i], arr2[0]);

            
            int start = arr2[0];
            int k;
            for (k = 1; k < n && arr2[k] < start; k++) {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = start;
        }
    }
}

int main() {
    int m, n;
    cout << "Enter size of arr1: ";
    cin >> m;
    cout << "Enter size of arr2: ";
    cin >> n;

    int arr1[m], arr2[n];

    cout << "Enter elements of Array 1 : ";
    for (int i = 0; i < m; i++) 
    cin >> arr1[i];

    cout << "Enter elements of Array 2  : ";
    for (int i = 0; i < n; i++) 
    cin >> arr2[i];

    mergeArrays(arr1, m, arr2, n);

    cout << "arr1 = ";
    for (int i = 0; i < m; i++) 
    cout << arr1[i] << " ";
    cout << "\n arr2 = ";
    for (int i = 0; i < n; i++)
     cout << arr2[i] << " ";

    return 0;
}
