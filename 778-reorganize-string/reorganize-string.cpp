class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        //pehle ek frequency vector mei saare elements ki frequency store karnege 
        vector<int>freq(26,0);

        for(auto &ch : s){
            freq[ch-'a']++; 

            //check karte hue chalna hai ki kisi ki bhi freq (n+1)/2 se badi hai ya nhi therefore 

            if(freq[ch-'a']>(n+1)/2){
                return "";
            }
        }
        priority_queue<pair<int,char>>pq; //for storing freq as well that character whose freq we are storing 
        for(int i = 0; i < 26; i++){
    if(freq[i] > 0){
        pq.push({freq[i], 'a' + i});
    }
}
        string result="";
        while(pq.size()>=2){
            auto p1=pq.top();
            pq.pop();
            auto p2=pq.top();
            pq.pop();

            result.push_back(p1.second);
            p1.first--;
            result.push_back(p2.second);
            p2.first--;

            if(p1.first>0){
                pq.push(p1);
            }
            if(p2.first>0){
                pq.push(p2);
            }
        }
        if(!pq.empty()){
            result.push_back(pq.top().second);
        }
        return result;
    }
};