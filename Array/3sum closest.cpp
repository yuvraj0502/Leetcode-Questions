class Solution{
    public:
    int threeSumClosest(vector<int>& nums, int target){
        long long closestSum=INT_MAX;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(abs(sum-target)<abs(closestSum-target)){
                    closestSum=sum;
                }
                else if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return closestSum;
    }
}