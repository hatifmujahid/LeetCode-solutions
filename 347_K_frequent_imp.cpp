#include<map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> result;  //returns the solution
        set<int> st(nums.begin(),nums.end()); //creates a set of unique elements from nums
        priority_queue<pair<int,int>>  pq; //creates a max heap from map m
        set<int>::iterator itr; //iterator for set
        for (itr = st.begin();itr != st.end(); itr++){
             pq.push({m[*itr],*itr}); //pushes the pair of frequency and element in the max heap
        }
        for(int i=0;i<k;i++){
            result.push_back(pq.top().second); //pushes the top element of the max heap in the result vector
            pq.pop(); //pops the top element of the max heap
        }
        return result;
    }
};