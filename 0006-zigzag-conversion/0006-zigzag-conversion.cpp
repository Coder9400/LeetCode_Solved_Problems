class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size()==1 || numRows==1) return s;
        char str[1001];
        int t= 0;
        int jumps = (numRows-1)*2;
        for(int i=0;i<numRows;i++)
        {
            for(int j=i;j<s.size();j+=jumps)
            {
               if(j<s.size()) 
               {
                    str[t] = s[j];
                    t++;
               }
                if(i>0 && i<numRows-1 && (j+jumps-2*i)<s.size())
                {
                    str[t]= s[j+jumps-2*i];
                    t++;
                }
               
            }
        }
            str[t] = '\0';
        return str;
    }
};