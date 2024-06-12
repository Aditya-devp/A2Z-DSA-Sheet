class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ds;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i!=0 and nums[i]==nums[i-1]){
                continue;
            }

           for(int j=i+1;j<nums.size();j++){
            if(j>i+1 and nums[j]==nums[j-1]){
                continue;
            }
           

         int k=j+1;
         int l=n-1;
            while(k<l){
                long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    vector<int>ans={nums[i],nums[j],nums[k],nums[l]};
                    ds.push_back(ans);
                    k++;
                    l--;
                    while(k<l and nums[k]==nums[k-1])k++;
                    while(k<l and nums[l]==nums[l+1])l--;
                }
            }
        }
        }
        return ds;
        
    }
};
