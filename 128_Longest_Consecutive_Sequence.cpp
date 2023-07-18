class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> m;
        int length = 0, prev = 0, max =0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int i =0;
        for(auto x:m){
            if(i==0){
                i++;
                prev = x.first;
                length++;
                continue;
            }
            if(x.first==prev+1){
                length++;
                prev = x.first;
            }
            else if(x.first!=prev+1){
                if(max<length){
                    max = length;
                }
                length=1;
                prev = x.first;
            }
            i++;
            cout<<x.first<<" "<<endl;
        }
        if(max<length)
            max = length;
        return max;
    }
};
