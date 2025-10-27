class Solution{
    public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;

        for(int i=0;i<nums1.size();i++){
            result.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            result.push_back(nums2[i]);
        }
        sort(result.begin(),result.end());

        int size=result.size();
        if(size%2==1){
            return result[size/2];
        }else{
            int mid1=result[size/2];
            int mid2=result[size/2-1];
            return (mid1+mid2)/2.0;
        }
    }
};