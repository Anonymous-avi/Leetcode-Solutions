class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum;
        vector<int>rightSum;
        vector<int>answer;
        int sum1=0;
        if(nums.size()==1){
            return {0} ;
        }
        for(int i=0 ; i<=nums.size()-1 ; i++){
            
            leftSum.push_back(sum1);
            sum1=sum1+nums[i];
        }
        int sum2=0;
        for(int i=0 ; i<nums.size()-1; i++){
            for(int j=i+1  ; j<nums.size() ; j++){
                sum2=sum2+nums[j];
            }
            rightSum.push_back(sum2);
            sum2=0;
        }
        rightSum.push_back(0);

        for(int i=0 ; i<nums.size() ; i++){
            answer.push_back(abs(leftSum[i]-rightSum[i]));
        }

        return answer;


        
    }
};