class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>freq;

       for(auto it : nums){
        freq[it]++;         //value,frequency stored 
       }

       priority_queue<pair<int,int>>pq;

       for(auto it : freq){   //pair mei hamesha braces ka sath store karte hai 
        pq.push({it.second,it.first});   //pehle frequency store karaayenge fir number taaki max heap frequency ke hissab se bane 
       }

       vector<int>result ;

       while(k--){
        result.push_back(pq.top().second);
        pq.pop();
       }

       return result;


       


    }
};