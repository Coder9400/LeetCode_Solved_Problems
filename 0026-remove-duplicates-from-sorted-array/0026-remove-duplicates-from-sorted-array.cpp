class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j,k;
        while(i<n)
        {
            j = i+1;
            while(j<n)
            {
                if(nums[i]==nums[j]) 
                {
                    k = j+1;
                    while(k<n)
                    {
                        nums[k-1] = nums[k];
                        k++;
                    }
                    n--;
                }
                j++;
            }
            if(i>1 && (nums[i-1]==nums[i]))
                    {
                        i-=2;
                    }
           else if(i==1 && (nums[i-1]==nums[i])) i--;
                    else i++;
        }
    //    int l = 0;
    //    for(int i=0;i<n;i++)
    //    {
    //     if(nums[i]!=101) l++;
    //    }
       return n;
    }
};