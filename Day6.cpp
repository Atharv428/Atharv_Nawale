#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(const vector<int>& arr) {
    vector<pair<int, int>> result;
    unordered_map<int, vector<int>> sumMap;
    int prefixSum = 0;
    sumMap[0].push_back(-1);

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];
        if (sumMap.find(prefixSum) != sumMap.end()) {
            for (int startIndex : sumMap[prefixSum]) {
                result.push_back({startIndex + 1, i});
            }
        }
        sumMap[prefixSum].push_back(i);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> result = findZeroSumSubarrays(arr);

    cout << "Zero-sum subarrays: ";
    for (const auto& p : result) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    return 0;
}
