class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> n;
        n.
        for(int i=0;i<nums.size();i++){
            if(n[nums[i]]==1)
                return true;
            n[nums[i]]=1;
        }
        return false;
    }
};