class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string result="";
       int maxlen=max(n1,n2);
       for(int i=0 ; i<maxlen ; i++){
        if(i<n1){
            result.push_back(word1[i]);
        }
        if(i<n2){
            result.push_back(word2[i]);
        }
       }
       return result;
        
    }
};