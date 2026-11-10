
#include <iostream>
#include <vector>

using namespace std;

// Function to print the array at every iteration
void printArray(vector<int>& arr)
{
    for(int x : arr)
        cout << x << " ";

    cout << endl;
}

int main()
{
    vector<int> arr = {3, 5, 2, 6, 4};

    int n = arr.size();

    vector<int> prefix(n, 0);
    vector<int> suffix(n, 0);

    cout << "Original Array: ";
    printArray(arr);

    // ==========================================
    // PREFIX SUM
    // ==========================================

    cout << "\n========== PREFIX SUM ==========\n";

    prefix[0] = arr[0];

    cout << "\nIteration 0 (Base Case)\n";
    cout << "prefix[0] = arr[0] = " << prefix[0] << endl;

    cout << "Prefix Array: ";
    printArray(prefix);

    for(int i = 1; i < n; i++)
    {
        cout << "\n--------------------------------\n";

        cout << "Iteration: " << i << endl;
        cout << "Current Index: i = " << i << endl;

        cout << "\nFormula:\n";
        cout << "prefix[i] = prefix[i-1] + arr[i]\n";

        cout << "\nSubstitution:\n";

        cout << "prefix[" << i << "] = prefix[" << i-1
             << "] + arr[" << i << "]\n";

        cout << prefix[i-1] << " + " << arr[i]
             << " = ";

        prefix[i] = prefix[i-1] + arr[i];

        cout << prefix[i] << endl;

        cout << "\nUpdated Prefix Array:\n";
        printArray(prefix);
    }

    cout << "\nFinal Prefix Sum: ";
    printArray(prefix);


    // ==========================================
    // SUFFIX SUM
    // ==========================================

    cout << "\n========== SUFFIX SUM ==========\n";

    suffix[n-1] = arr[n-1];

    cout << "\nIteration 0 (Base Case)\n";

    cout << "suffix[" << n-1 << "] = arr[" << n-1
         << "] = " << suffix[n-1] << endl;

    cout << "Suffix Array: ";
    printArray(suffix);

    int iteration = 1;

    for(int i = n-2; i >= 0; i--)
    {
        cout << "\n--------------------------------\n";

        cout << "Iteration: " << iteration++ << endl;
        cout << "Current Index: i = " << i << endl;

        cout << "\nFormula:\n";
        cout << "suffix[i] = suffix[i+1] + arr[i]\n";

        cout << "\nSubstitution:\n";

        cout << "suffix[" << i << "] = suffix[" << i+1
             << "] + arr[" << i << "]\n";

        cout << suffix[i+1] << " + " << arr[i]
             << " = ";

        suffix[i] = suffix[i+1] + arr[i];

        cout << suffix[i] << endl;

        cout << "\nUpdated Suffix Array:\n";
        printArray(suffix);
    }

    cout << "\nFinal Suffix Sum: ";
    printArray(suffix);

    return 0;
}
