#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> d;
        for (int i = 0; i < nums.size(); ++i) {
            if (d.count(nums[i]) && i - d[nums[i]] <= k) {
                return true;
            }
            d[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 1};
    int k1 = 3;
    cout << boolalpha << solution.containsNearbyDuplicate(nums1, k1) << endl; // true

    vector<int> nums2 = {1, 0, 1, 1};
    int k2 = 1;
    cout << boolalpha << solution.containsNearbyDuplicate(nums2, k2) << endl; // true

    vector<int> nums3 = {1, 2, 3, 1, 2, 3};
    int k3 = 2;
    cout << boolalpha << solution.containsNearbyDuplicate(nums3, k3) << endl; // false

    return 0;
}
