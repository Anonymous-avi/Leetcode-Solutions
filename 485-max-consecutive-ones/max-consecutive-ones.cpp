class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>counter;
        int count=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==1){
            count++;
            }
            else{
            counter.push_back(count);
            count=0;
            }

        }
        counter.push_back(count);
        int result=*max_element(counter.begin() , counter.end());
        return result;
        
    }
};