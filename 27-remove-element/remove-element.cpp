class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count =0;
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<end){
            if(nums[start]==val && nums[end]!=val){
                swap(nums[start],nums[end]);
            }
            else if(nums[start]==val && nums[end]==val){
                end--;
                swap(nums[start],nums[end]);
            }
            else if(nums[start]!=val && nums[end]!=val){
                start++;
            }
            else
            end--;
        }
        for(int i=0 ; i<n ;i++){
            if(nums[i]!=val){
                count++;
            }
        }
        return count;
        
        
    }
};