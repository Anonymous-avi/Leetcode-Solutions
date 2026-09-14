class Solution {
public:
void solve(vector<int>&nums , int i , vector<int>&temp , vector<vector<int>>&result){
    //base case 
    if(i>=nums.size()){
        result.push_back(temp);
        return;
    }
    //Case 1  - current element ko lena hai subset mei
    temp.push_back(nums[i]);
    //now explore the lene wala case furthur to check for other indices also
    solve(nums,i+1,temp,result);
    //Case 2 - current element ko nhi lena subset mei
    temp.pop_back();
    //now explore this case furthur to check with all the indices
    solve(nums,i+1,temp,result);
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>result;
       int i=0;
       vector<int>temp;
       solve(nums,i,temp,result);
       return result; 
    }
};