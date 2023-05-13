class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                m[nums[i]]=-1;
            }else {
                m[nums[i]]=i;
            }
        }
        vector<int> m1;
        for(int i=0;i<nums.size();i++){
            int t = target-nums[i];
            if(m[t]!=0 && m[t]!=i && m[t]!=-1){
                m[t]==-1?m1.push_back(0):m1.push_back(i);
                m1.push_back(m[t]);
                break;
            }
        }
        return m1;
    }
};