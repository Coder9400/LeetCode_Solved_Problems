class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        
        int i=0,j=height.size()-1;
        while(j>i)
        {
            int w = j-i;
            int ht = height[i]<height[j] ? height[i] : height[j];
            if(w*ht>=max_area) max_area = w*ht;
            height[i]<height[j] ? i++ : j--;
        }
        return max_area;
    }
};