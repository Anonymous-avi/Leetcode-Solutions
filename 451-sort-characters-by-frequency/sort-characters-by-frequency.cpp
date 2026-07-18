class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>freq;
      //hum saath ke saath max frequency nikaalenge 
     int  maxFreq=0;
      for(auto ch : s){
        freq[ch]++;
        maxFreq=max(maxFreq,freq[ch]);
      }
      
      //fir maximum freq jitna loop chalayenge or map mei check karenge ki kis character ki frequency max freq jitni hai
      string ans="";
      for(int i=maxFreq ; i>=1 ; i--){
        for(auto it : freq){
            if(it.second==i){
                ans.append(i,it.first);
            }
        }
      }
      return ans;
      

    }
};