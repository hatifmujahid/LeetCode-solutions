class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0];
        int slow = nums[0];
        while(1){
            fast = nums[nums[fast]];
            slow = nums[slow];
            if(fast==slow)
                break;
        }
        int ptr = nums[0];

        while(ptr!=slow){
            ptr = nums[ptr];
            slow = nums[slow];
        }
        return ptr;
    }
};
