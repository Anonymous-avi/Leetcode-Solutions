class Solution {
private:
    int sumEqualToTarget(int index , int sum , vector<int>&nums , int target){
        if(index==nums.size()){
          if(sum==target){
            return 1;
          }
          else{
            return 0;
          }
        }
        int positive=sumEqualToTarget(index+1,sum+nums[index],nums,target);
        int left=sumEqualToTarget(index+1,sum-nums[index],nums,target);

        return positive+left;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
       return sumEqualToTarget(0,0,nums,target);
        
    }
};