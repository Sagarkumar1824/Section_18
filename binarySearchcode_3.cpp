#include <iostream>
#include <vector>

using namespace std;

int findFirst(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, first = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            first = mid;
            right = mid - 1;  // Move left to find the first occurrence
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return first;
}

int findLast(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, last = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            last = mid;
            left = mid + 1;  // Move right to find the last occurrence
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return last;
}

vector<int> searchRange(vector<int>& nums, int target) {
    return {findFirst(nums, target), findLast(nums, target)};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    
    vector<int> result = searchRange(nums, 8);
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl; // Expected: [3,4]

    result = searchRange(nums, 6);
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl; // Expected: [-1,-1]

    return 0;
}
