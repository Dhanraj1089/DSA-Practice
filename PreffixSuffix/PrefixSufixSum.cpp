#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {3, 5, 2, 6, 4};

    int n = arr.size();

    vector<int> prefix(n);
    vector<int> suffix(n);

    // -------------------------------
    // PREFIX SUM
    // -------------------------------

    // Base case
    prefix[0] = arr[0];

    cout << "Building Prefix Sum\n";
    cout << "prefix[0] = arr[0] = " << prefix[0] << endl;

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];

        cout << "\nprefix[" << i << "] = prefix[" << i - 1
             << "] + arr[" << i << "]\n";

        cout << prefix[i - 1] << " + "
             << arr[i] << " = "
             << prefix[i] << endl;
    }

    cout << "\nFinal Prefix Sum Array\n";

    for(int x : prefix)
        cout << x << " ";

    cout << endl;

    // -------------------------------
    // SUFFIX SUM
    // -------------------------------

    suffix[n - 1] = arr[n - 1];

    cout << "\n\nBuilding Suffix Sum\n";

    cout << "suffix[" << n - 1 << "] = arr[" << n - 1
         << "] = " << suffix[n - 1] << endl;

    for(int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];

        cout << "\nsuffix[" << i << "] = suffix[" << i + 1
             << "] + arr[" << i << "]\n";

        cout << suffix[i + 1] << " + "
             << arr[i] << " = "
             << suffix[i] << endl;
    }

    cout << "\nFinal Suffix Sum Array\n";

    for(int x : suffix)
        cout << x << " ";

    cout << endl;

    return 0;
}