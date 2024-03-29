class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int area = 0;
        int l = 0;
        int r = height.size() - 1;
        while(l<r){
            int h = min(height[l], height[r]);
            int w = abs(l-r);
            int area = h * w;
            if(max_area<area){
                swap(max_area, area);
            }
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
            
        return max_area; 
    }
};
