class Solution {
  public:
    void sort012(vector<int>& nums) {
        // code here
        int low = 0;      // Pointer for the position where the next 0 should be placed
        int mid = 0;      // Current element pointer (iterator)
        int high = nums.size() - 1; // Pointer for the position where the next 2 should be placed
    
        while (mid <= high) {
            if (nums[mid] == 0) {
                // If the element is 0, swap it with the element at the 'low' pointer
                std::swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                // If the element is 1, it is already in the correct "middle" section
                mid++;
            } else {
                // If the element is 2, swap it with the element at the 'high' pointer
                std::swap(nums[mid], nums[high]);
                high--;
                // Note: We do not increment 'mid' here because the swapped element at the current 'mid'
                // position could be a 0 or 1, which needs to be processed in the next iteration.
            }
        }
    }
};