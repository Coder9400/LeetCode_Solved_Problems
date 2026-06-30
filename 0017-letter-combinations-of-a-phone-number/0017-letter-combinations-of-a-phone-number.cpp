class Solution {
public:
    void character(string output,vector<string> &res,string mapping[],int idx,string digits){
        if(idx>=digits.length()){
            string f = "";
            for(auto it : output){
                f = f + it;
            }
            res.push_back(f);
            return ;
        }
        int number = digits[idx] - '0';
        string val = mapping[number];
        char g ;
        for(int i=0;i<val.length();i++)
        {
            g = val[i];
            output.push_back(g);
            character(output,res,mapping,idx+1,digits);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
       
        string  mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       
        int idx = 0;
        vector<string> res;
        string output = "";
          if(digits.size()==0) return res;
        character(output,res,mapping,idx,digits);
        return res;
    }
};