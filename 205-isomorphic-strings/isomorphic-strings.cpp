class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //meri brute approach mei galti hai uska counter example hai s=aba and t=baa;
        if(s.size()!=t.size()){
            return false;
        }
        //map use karenge lekin frequency store karne ke liye nhi character to char mapping store karne ke liye ....isiliye key value pairs char char hi honge naki char int 
        unordered_map<char,char>mpps;
        unordered_map<char,char>mppt;
        for(int i=0 ; i<s.size() ; i++){
            mpps[s[i]]=t[i];
        }
        for(int i=0 ; i<t.size() ; i++){
            mppt[t[i]]=s[i];
        }

        for(int i=0 ; i<s.size() ; i++){
            if(mpps.find(s[i])!=mpps.end()){
                if(mpps[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        for(int i=0 ; i<t.size() ; i++){
            if(mppt.find(t[i])!=mppt.end()){
                if(mppt[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;



        
    }
};