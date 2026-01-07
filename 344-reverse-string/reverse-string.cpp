class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0; ///these are pointers...so value cannot be stored..they will only point 
        int end=n-1;
        char temp;
        while(start<end){
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
            

        
    }
};