class Solution {
public:
    string reverseWords(string s) {
       vector<string>vec;
       string word="";
       for(int i=0 ; i<s.size() ; i++){
        if(s[i]==' '){
            if(!word.empty()){
                vec.push_back(word);
                word="";
            }
            
        }
        else{
                word=word+s[i];
            }
        if(i==s.size()-1){
            if(!word.empty()){
                vec.push_back(word);
            }
        }
       }
       reverse(vec.begin() , vec.end());
       string ans="";
       for(int i=0 ; i<vec.size() ; i++){
        ans=ans+vec[i];
        if(i!=vec.size()-1){
            ans=ans+" ";
        }
       }
       return ans;
    }
    
};