class Solution {
public:
    bool isAnagram(string a, string b) {
        if(a.size()!=b.size()){
            return false;
        }
       map<char,int>mppa;
       map<char,int>mppb;
       for(auto ch : a){
        mppa[ch]++;
       }
        for(auto ch : b){
        mppb[ch]++;
       }
       if(mppa==mppb){
        return true;
       }
       return false;
       


        
    }
};