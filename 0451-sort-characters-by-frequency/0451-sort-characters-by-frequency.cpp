class Solution {
public:
    string frequencySort(string s) {
        char str[500001];
        int a = 0;
        map<char, int> hash;
        for (int i = 0; s[i] != '\0'; i++) {
            hash[s[i]]++;
        }
        multimap<int,char,greater<int>> mpp;
        for(auto it : hash)
        {
            mpp.insert({it.second,it.first});
        }
        for(auto it : mpp)
        {
            for(int i=0;i<it.first;i++)
            {
                str[a] = it.second;
                a++;
            }
        }
        str[a] = '\0';
        return str;
    }
};