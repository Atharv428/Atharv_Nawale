#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // Map to store groups of anagrams
    unordered_map<string, vector<string>> mp;

    // Traverse each word
    for (string word : strs) {
        string key = word;               // copy word
        sort(key.begin(), key.end());    // sort letters to form key
        mp[key].push_back(word);         // add word to its group
    }

    // Collect all groups
    vector<vector<string>> result;
    for (auto it : mp) {
        result.push_back(it.second);
    }

    return result;
}

int main() {
    // Input
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    // Function call
    vector<vector<string>> groups = groupAnagrams(strs);

    // Output
    cout << "Grouped Anagrams:\n";
    for (auto group : groups) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}
