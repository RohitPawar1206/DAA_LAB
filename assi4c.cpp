#include <iostream>
#include <vector>
using namespace std;

void printAllSubsets(vector<int> &arr)
{
    int n = arr.size();
    int totalSubsets = 1 << n; // Total subsets = 2^n

    for (int mask = 0; mask < totalSubsets; mask++)
    {
        cout << "{";
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            { // Check if the i-th element is in the current subset
                cout << arr[i];
                if (i < n - 1 && (mask & (1 << (i + 1))))
                    cout << ", "; // Add a comma if more elements follow
            }
        }
        cout << "}" << endl;
    }
}

int main()
{
    // Input array
    vector<int> S = {1, 2, 3};

    cout << "All subsets of the set are:" << endl;
    printAllSubsets(S);

    return 0;
}
