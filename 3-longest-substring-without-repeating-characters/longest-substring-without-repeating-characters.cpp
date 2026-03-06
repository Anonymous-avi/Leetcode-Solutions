class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int start=0;
        for(int end=0 ; end<n ; end++){
            for(int i=start ; i<end ; i++){
                if(s[i]==s[end]){
                    start=i+1;
                    break;
                }
            }
            ans=max(ans,end-start+1);
        }
        return ans;
        
    }
};