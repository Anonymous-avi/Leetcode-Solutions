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
       }///can compare the maps directly 
       if(mppa==mppb){
        return true;
       }
       return false;
       
    //most optimal yeh hai ki ek hi map banao or pehli string ke liye freq++ karo or dusri ke liye freq--....agar last mei 0 baje toh that means it is anagram

        
    }
};