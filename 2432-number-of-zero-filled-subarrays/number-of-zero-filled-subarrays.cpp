class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long streak=0;
        long long count=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0){
                streak++;
                count=count+streak;
            }
            else{
                streak=0;
            }
        }
        return count;
        
    }
};