class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mapp;
        for(auto it : nums){
            mapp[it]++;
        }
        for(auto it : mapp){
            if(it.second==1) return it.first;
        }
        return 0;
    }
};