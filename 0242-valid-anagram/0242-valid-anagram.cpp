class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        multiset<char> s1;
        multiset<char> t1;
        for(int i=0;i<s.length();i++)
    {
        s1.insert(s[i]);
    }
    for(int i=0;i<t.length();i++)
    {
        t1.insert(t[i]);
    }
    if(s1==t1) return 1;
    else return 0;
    }
};