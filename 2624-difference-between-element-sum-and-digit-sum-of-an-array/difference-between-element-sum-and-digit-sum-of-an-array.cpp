class Solution {
    int digitSum(int n){
        int sumd=0;
        int digit=0;
        while(n>0){
            digit=n%10;
            sumd=sumd+digit;
            n=n/10;

        }
        return sumd;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        for(int i=0 ; i<nums.size() ; i++){
            elementSum=elementSum+nums[i];
        }
        int sumdi=0;
        for(int i=0 ; i<nums.size() ; i++){
           sumdi=sumdi+digitSum(nums[i]);
        }
        int result=abs(elementSum-sumdi);

        return result;
        
    }
};