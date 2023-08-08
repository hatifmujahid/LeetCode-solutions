class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        vector<int> right(n);
        vector<int> left(n);
        right[0] = 1;
        for(int i=1;i<n;i++){
            right[i] = right[i-1] * nums[i-1];
        }
        left[n-1] = 1;
        for(int i=n-2; i>=0;i--){
            left[i] = left[i+1] * nums[i+1];
        }
        for(int i=0;i<n;i++){
            answer[i] = right[i] * left[i];
        }
        return answer;
    }
};
