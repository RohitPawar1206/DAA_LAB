#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> findDistinctSubsets(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    set<vector<int>> uniqueSubsets; // Use a set to store unique subsets
    int n = arr.size();
    int totalSubsets = 1 << n; // Total subsets = 2^n

    for (int mask = 0; mask < totalSubsets; mask++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            { // Check if i-th bit is set
                subset.push_back(arr[i]);
            }
        }
        uniqueSubsets.insert(subset); // Add subset to the set
    }

    // Convert set to vector
    return vector<vector<int>>(uniqueSubsets.begin(), uniqueSubsets.end());
}

void printSubsets(const vector<vector<int>> &subsets)
{
    for (const auto &subset : subsets)
    {
        cout << "{";
        for (size_t i = 0; i < subset.size(); i++)
        {
            cout << subset[i];
            if (i < subset.size() - 1)
                cout << ", ";
        }
        cout << "}" << endl;
    }
}

int main()
{

    vector<int> S = {1, 2, 2};

    // Find all distinct subsets
    vector<vector<int>> subsets = findDistinctSubsets(S);
    cout << "Distinct Subsets:" << endl;
    printSubsets(subsets);

    return 0;
}
