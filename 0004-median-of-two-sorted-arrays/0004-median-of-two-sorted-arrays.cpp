class Solution {
public:

    void merge(int arr[],int beg,int mid,int end){
        int low = beg;
        int high = mid+1;
        vector<int> it;
        int a = 0;

            while(low<=mid && high<=end){
                if(arr[low]<=arr[high]){
                    // brr[a] = arr[low];
                    // a++;
                    // low++;
                    it.push_back(arr[low]);
                    low++;
                }
                else
                {
                    // brr[a] = arr[high];
                    // a++;
                    // high++;
                    it.push_back(arr[high]);
                    high++;
                }
            }

            while(low<=mid){
                // brr[a] = arr[low];
                //     a++;
                //     low++;
                it.push_back(arr[low]);
                    low++;
            }

            while(high<=end){
                // brr[a] = arr[high];
                //     a++;
                //     high++;
                 it.push_back(arr[high]);
                    high++;
            }
            a = 0;
            vector<int>::iterator itt;
            itt = it.begin();
            for(int i=beg;i<=end;i++)
            {
              if(itt==it.end()) break;
              arr[i] = *itt;
              itt++;
            }
    }

    void merge_sort(int arr[],int beg,int end){
        if(beg<end){
            int mid = (beg+end)/2;
            merge_sort(arr,beg,mid);
            merge_sort(arr,mid+1,end);
            merge(arr,beg,mid,end);
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int arr[2001];
        int a = 0;
        for (auto it : nums1) {
            arr[a] = it;
            a++;
        }
        for (auto it : nums2) {
            arr[a] = it;
            a++;
        }
        merge_sort(arr,0,a-1);
        double f,f1;
        if(a%2!=0)
        {
            f = double(arr[a/2]);
            f = f-0;
        }
        else
        {
            a = a/2;
            f = double(arr[a-1]);
            f1 = double(arr[a]);
            f = (f+f1)/2;
        }
        return f;
    }
};