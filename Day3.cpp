#include <iostream>
using namespace std;

int findDuplicate(const int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];

   
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);


    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array (n): ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements (each between 1 and " << n - 1 << "):\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int duplicate = findDuplicate(arr, n);
    cout << "Duplicate number is: " << duplicate << endl;

    delete[] arr;  
    return 0;
}
