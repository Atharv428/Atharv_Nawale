#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(int arr[], int n) {
    vector<int> leaders;
    int max_from_right = arr[n-1];
    leaders.push_back(max_from_right);

 
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders.push_back(arr[i]);
        }
    }

 
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> leaders = findLeaders(arr, n);

    cout << "Leaders: ";
    for (int x : leaders) {
        cout << x << " ";
    }
    return 0;
}
