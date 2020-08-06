class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        if (n<3)return 0; 
        for(int i=1;i<n-1;i++)
        {
            int l=i-1;
            int r=i+1;
            int posl,posr;
            while(l>=0&&r<n&&(height[l]<height[i]||height[r]<height[i]))
            {
                if(height[i]>height[r])r++;
                if(height[i]>height[l])l--;
            }
            if(l>=0&&r<n){
            posl=min(height[l],height[r])-height[i];
            if(posl>0)
            ans+=min(height[l],height[r])-height[i];
            }
        }
        return ans;
    }
};
​
​
