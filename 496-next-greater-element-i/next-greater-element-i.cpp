class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int temp=0;
       vector<int>ans;
       for(int i=0 ; i<nums1.size() ; i++){
        for(int j=0 ; j<nums2.size() ; j++){
            if(nums1[i]==nums2[j]){
                temp=j;
                break;
            }
        }

        int nextGreater=-1;
        for(int j=temp+1; j<nums2.size() ; j++){
            if(nums2[j]>nums2[temp]){
                nextGreater=nums2[j];
                break;
            }

        }
        ans.push_back(nextGreater);
       }

       return ans;
       
        
    }
};