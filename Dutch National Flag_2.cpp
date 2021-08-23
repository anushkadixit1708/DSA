//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//You must solve this problem without using the library's sort function.

//Using switch case- did not pass some test cases

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo =0;
        int mid =0;
        int n = nums.size();
        int high = n -1;
        
        while(mid<=high){
            switch(nums[mid]){
            
            //If the element is 0
                case 0:
                    swap(nums[lo++], nums[mid++]);
                    break;
                    
              //If the element is 1  
                case 1:
                    mid++;
                    break;
                    
            // If the element is 2
                case 2:
                    swap(nums[mid++], nums[high--]);
                    break;
        }
        }
        
    }
};
