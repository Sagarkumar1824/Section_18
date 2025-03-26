#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return left; 
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    
    cout << "Output: " << searchInsert(nums, 5) << endl; // Expected: 2
    cout << "Output: " << searchInsert(nums, 2) << endl; // Expected: 1
    cout << "Output: " << searchInsert(nums, 7) << endl; // Expected: 4
    
    return 0;
}
