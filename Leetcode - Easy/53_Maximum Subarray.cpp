//Approach: Sliding Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      //maxSm is initiated and becomes equal to nums
        int i, l = nums.size(),maxSm=nums[0], sum=0;
        for (i=0; i<l; i++){
            if(sum<0)
              //flush the value of sum everytime
                sum = 0;
            sum+=nums[i];
            maxSm = std::max(maxSm,sum);
        }
        return maxSm;
    }
};
