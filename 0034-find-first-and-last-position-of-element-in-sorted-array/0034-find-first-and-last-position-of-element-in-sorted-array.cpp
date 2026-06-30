class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count = 0;
        vector<int> vec;

        if(nums.size()==0){
            vec.push_back(-1);
            vec.push_back(-1);
            return vec;
        }

        
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();it++){
            if(*it==target)
            {
                vec.push_back(count);
            }
            count++;
        }

        if(vec.size()==1){
            it = vec.begin();
            vec.push_back(*it);
        }
        else if(vec.size()==0)
        {
              vec.push_back(-1);
            vec.push_back(-1);
        }
        else if(vec.size()>2)
        {
            vec.erase(vec.begin()+1,vec.end()-1);
        }
        return vec;
    }
};