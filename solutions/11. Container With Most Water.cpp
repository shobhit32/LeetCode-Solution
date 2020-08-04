class Solution {
public:
    int maxArea(vector<int>& height) {
     int front=0,back=height.size()-1;
        int max_area=0,f1=0,b1=0;
       for(;front<back;)
       {
           int curr_area = (back - front) * min(height[front],height[back]);
           max_area = max(max_area,curr_area);
           
           if(height[front] < height[back])
               front++;
           else
               back--;
       }
        return max_area;
    }
};
