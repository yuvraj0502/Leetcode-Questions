class Solution{
    public:
    vector<vector<int>>fourSum(vector<int>&nums,int target){
        if(nums.size()<4){
            return {};
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;

        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int start=j+1;
                int end=nums.size()-1;

                while(start<end){
                    long long sum=static_cast<long long>(nums[i]+nums[j]+nums[start]
                        +nums[end])
                    // int sum=static_cast<int>(nums[i])+nums[j]+nums[start]+nums[end]
                    // int sum=nums[i]+nums[j]+nums[start]+nums[end];

                    if(sum<target){
                        start++;
                    }
                    else if(sum>target){
                        end--;
                    }
                    else{
                        result.push_back({nums[i],nums[j],nums[start],nums[end]});

                        while(start<end && nums[start]==nums[start+1]){
                            start++;
                        }
                        while(start<end && nums[end]==nums[end-1]){
                            end--;
                        }
                        start++;
                        end--;
                    }
                }
            }
        }
        return result;
    }
}