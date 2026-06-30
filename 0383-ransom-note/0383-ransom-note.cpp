class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hash, hash1;
        int i = ransomNote.length();
        int j = magazine.length();
        for (int k = 0; k < i; k++) {
            hash[ransomNote[k]]++;
        }
        for (int k = 0; k < j; k++) {
            hash1[magazine[k]]++;
        }
        for (auto it : hash) {
            char ch = it.first;
            if (hash1[ch] < it.second)
                return false;
        }
        return true;
    }
};