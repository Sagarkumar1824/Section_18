#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] > nums[right]) {
           
            left = mid + 1;
        } else {
         
            right = mid;
        }
    }
    
    return nums[left]; 
}

int main() {
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Output: " << findMin(nums1) << endl; 

    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Output: " << findMin(nums2) << endl; 

    vector<int> nums3 = {11, 13, 15, 17};
    cout << "Output: " << findMin(nums3) << endl; 
    return 0;
}
