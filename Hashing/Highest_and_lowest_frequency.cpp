#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int highest_freq = INT_MIN;
    int lowest_freq = INT_MAX;

    // First, find the highest and lowest frequencies
    for (auto it : mpp) {
        highest_freq = max(highest_freq, it.second);
        lowest_freq = min(lowest_freq, it.second);
    }

    // Now collect all numbers with those frequencies
    vector<int> highest_nums;
    vector<int> lowest_nums;

    for (auto it : mpp) {
        if (it.second == highest_freq) {
            highest_nums.push_back(it.first);
        }
        if (it.second == lowest_freq) {
            lowest_nums.push_back(it.first);
        }
    }

    // Output results
    cout << "Number(s) with highest frequency (" << highest_freq << "): ";
    for (auto it : highest_nums) {
        cout << it << " ";
    }
    cout << "\n";

    cout << "Number(s) with lowest frequency (" << lowest_freq << "): ";
    for (auto it : lowest_nums) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
