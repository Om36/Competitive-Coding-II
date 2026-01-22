#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    res[i] *= nums[j];
                }
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
