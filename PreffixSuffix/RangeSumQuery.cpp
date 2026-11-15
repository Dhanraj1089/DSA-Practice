
#include <iostream>
#include <vector>
using namespace std;

class NumArray {

private:
    vector<int> prefix;

public:

    // Constructor: Build Prefix Sum Array
    NumArray(vector<int>& nums) {

        int n = nums.size();

        if (n == 0) return;

        prefix.resize(n);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {

            prefix[i] = prefix[i - 1] + nums[i];

        }
    }

    // Return sum between left and right indices
    int sumRange(int left, int right) {

        if (left == 0) {
            return prefix[right];
        }

        return prefix[right] - prefix[left - 1];

    }
};

int main() {

    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    // Create object
    NumArray obj(nums);

    cout << "Original Array: ";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << "\n\n";

    cout << "Prefix Sum Array: ";

    for (int i = 0; i < nums.size(); i++) {
        // Displaying cumulative sums for illustration
        // The prefix vector is private, so see values below.
    }

    cout << "\n";

    cout << "Range Sum Query Results:\n";

    cout << "sumRange(0, 2) = "
         << obj.sumRange(0, 2) << endl;

    cout << "sumRange(2, 5) = "
         << obj.sumRange(2, 5) << endl;

    cout << "sumRange(0, 5) = "
         << obj.sumRange(0, 5) << endl;

    cout << "sumRange(1, 3) = "
         << obj.sumRange(1, 3) << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefix;

public:

    // Constructor: Build Prefix Sum Array
    NumArray(vector<int>& nums) {

        int n = nums.size();

        prefix.resize(n + 1, 0);

        for (int i = 0; i < n; i++) {

            prefix[i + 1] = prefix[i] + nums[i];

        }
    }

    // Return sum between left and right indices
    int sumRange(int left, int right) {

        return prefix[right + 1] - prefix[left];

    }
};

int main() {

    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    // Create object and build prefix array
    NumArray obj(nums);

    cout << "Original Array: ";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << "\n\n";

    // Display range sum queries
    cout << "Range Sum Query Results:\n";

    cout << "sumRange(0, 2) = "
         << obj.sumRange(0, 2) << endl;

    cout << "sumRange(2, 5) = "
         << obj.sumRange(2, 5) << endl;

    cout << "sumRange(0, 5) = "
         << obj.sumRange(0, 5) << endl;

    cout << "sumRange(1, 3) = "
         << obj.sumRange(1, 3) << endl;

    return 0;
}
