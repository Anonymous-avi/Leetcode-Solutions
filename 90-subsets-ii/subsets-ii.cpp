class Solution {
    public:
    void solve(vector<int>&nums,int i , vector<int>&temp , vector<vector<int>>&result){
        
        //base case
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }
        //Case 1 : to include the current element in the subset 
        temp.push_back(nums[i]);
        //then explore furthur
        solve(nums,i+1,temp,result);
        //Case 2 : to not include the current element
        temp.pop_back();
        //explore futhur
        solve(nums,i+1,temp,result);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());//recurive call me baar baar sort hoga toh time complexity increase hogi ...isiliye it's better to just sort one time only in the main function 
       vector<vector<int>>result;
       vector<vector<int>>ans;
       vector<int>temp;
       int i=0;
       solve(nums,i,temp,result);
       
       sort(result.begin() , result.end());
       ans.push_back(result[0]);
       for(int i=1 ; i<result.size() ; i++){
        if(result[i]!=result[i-1]){
            ans.push_back(result[i]);

        }
       }

       return ans;
        
    }
};