class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       /* BRUTE APPROACH MINE 
       int n=temperatures.size();
        vector<int>ans;
        for(int i=0 ; i<n-1 ; i++){
            int count=0;
            int j=i;
            while(j<n){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(count);
                    break;
                }
                else{
                    count++;
                    j++;
                }

                
            }
            if(j==n){
                ans.push_back(0);
            }

        }
        ans.push_back(0);
        return ans; */

      int n = temperatures.size();
        vector<int> ans(n, 0);

        stack<int> st;   // to store indices

        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            if(!st.empty()) {
                ans[i] = st.top() - i;
            }

            st.push(i);
        }

        return ans;    
    }

};