class Solution {
public:
    int romanToInt(string &s) {
      //optimal approach only 
       unordered_map<char,int>mpp;
       mpp['I']=1;
       mpp['V']=5;
       mpp['X']=10;
       mpp['L']=50;
       mpp['C']=100;
       mpp['D']=500;
       mpp['M']=1000;
       
       int ans=0;

       for(int i=0 ; i<s.size()-1 ; i++){
       if(mpp[s[i]] < mpp[s[i+1]])
{
    ans -= mpp[s[i]];
}
else
{
    ans += mpp[s[i]];
}
       }
       //iske bina last waali value kabhi process hi nhi hogi 
       ans=ans+mpp[s.back()];
       return ans;

        
    }
};