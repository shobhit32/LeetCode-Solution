class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> vec;
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
              vec.push_back(nums1[i++]);
            else
                vec.push_back(nums2[j++]);
        }
        while(i<m)
            vec.push_back(nums1[i++]);
        while(j<n)
            vec.push_back(nums2[j++]);
        double ans;
        int med=(m+n)/2;
        if((m+n)%2!=0)
            ans=(double)vec[med];
        else
            ans=((double)(vec[med]+vec[med-1]))/2.0;
        return ans;
    }
};
