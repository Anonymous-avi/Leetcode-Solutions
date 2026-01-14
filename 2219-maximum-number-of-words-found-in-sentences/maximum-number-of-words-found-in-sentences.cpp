class Solution {
    public:
    int countWords(string s){
        int count=1;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]==' ')
            count++;
        }
        return count;
    }
public:
    int mostWordsFound(vector<string>& sentences) {
        int result=0;
        for(int i=0 ; i<sentences.size() ; i++){
            int currCount=countWords(sentences[i]);
            result=max(result,currCount);

        }
        
        return result;

        
    }
};