class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>bob;
        vector<int>alice;
        vector<int>ans;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size()-1 ; i=i+2){
           alice.push_back(nums[i]);
        }
        for(int i=1 ; i<nums.size() ; i=i+2){
            bob.push_back(nums[i]);
        }

        for(int i = 0; i < alice.size(); i++) {
            ans.push_back(bob[i]);
            ans.push_back(alice[i]);
        }

        return ans;
    }
};