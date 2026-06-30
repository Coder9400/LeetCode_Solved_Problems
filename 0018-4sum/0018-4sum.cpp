class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // vector<vector<int>> sum;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-3;i++){
        //         if(i>0  &&  nums[i]==nums[i-1]) continue;
        //     for(int j=i+1;j<nums.size()-2;j++){
        //         if(j>i+1 && nums[j]==nums[j-1]) continue;
        //         int k = j+1;int l=nums.size()-1;
        //         while(k<l){
        //            // int total = nums[i]+nums[j]+nums[k]+nums[l];
        //             if( (nums[i]+nums[j]+nums[k]+nums[l]) == target){
        //                 sum.push_back( {nums[i],nums[j],nums[k],nums[l]} );
        //                 k++;
        //                 l--;
        //                 while(k<l && nums[k]==nums[k-1]) k++;
        //                 while(k<l && nums[l]==nums[l+1]) l--; 
        //             }
        //             else if(    (nums[i]+nums[j]+nums[k]+nums[l])  <target) k++;
        //             else l--;
        //         }
        //     }
        // }
        // return sum;


            
        vector<vector<int>> sum;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n - 3; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int k = j + 1, l = n - 1;
                while(k < l) {
                    long long total = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(total == target) {
                        sum.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++; l--;
                        while(k < l && nums[k] == nums[k - 1]) k++;
                        while(k < l && nums[l] == nums[l + 1]) l--;
                    } else if(total < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return sum;
    }
};