class Solution {
public:
    char roman[4000];
    int t = 0;
    void ran(int c)
    {
        if(c<5)
        {
            if(c==4)
            {
                roman[t] = 'I';
                t++;
                roman[t] = 'V';
                t++;
            }
            else
            {
                roman[t] = 'I';
                t++;
                c = c-1;
                for(int i=1;i<=c;i++)
                {
                    roman[t] = 'I';
                    t++;
                }
            }
        }
        else if(c>5 && c<10)
        {
            
         if(c==9)
            {
                roman[t] = 'I';
                t++;
                roman[t] = 'X';
                t++;
            }
            else
            {
                roman[t] = 'V';
                t++;
                c = c-5;
                for(int i=0;i<c;i++)
                {
                    roman[t] = 'I';
                    t++;
                }
            }
        }
        else if(c>10 && c<50)
        {
            if(c==40)
            {
                roman[t] = 'X';
                t++;
                roman[t] = 'L';
                t++;
            }
           else if(c>10)
            {
                roman[t] = 'X';
                t++;
                c = (c-10)/10;
                for(int i=0;i<c;i++)
                {
                    roman[t] = 'X';
                    t++;
                }
            }
        }
        else if(c>50 && c<100)
        {
            if(c==90)
            {
                roman[t]='X';
                t++;
                roman[t] = 'C';
                t++;
            }
            else if(c>50)
            {
                roman[t] = 'L';
                t++;
                c = (c-50)/10;
                for(int i=0;i<c;i++)
                {
                    roman[t] = 'X';
                    t++;
                }
            }
        }
        else if(c>100 && c<500)
        {
            if(c==400)
            {
                roman[t] = 'C';
                t++;
                roman[t] = 'D';
                t++;
            }
            else if(c>100)
            {
                roman[t] = 'C';
                t++;
                c = (c-100)/100;
                for(int i=0;i<c;i++)
                {
                    roman[t] = 'C';
                    t++;
                }
            }
        }
        else if(c>500 && c<1000)
        {
            if(c==500)
            {
                roman[t] = 'D';
                t++;
            }
            else if(c==900)
            {
                roman[t] = 'C';
                t++;
                roman[t] = 'M';
                t++;
            }
            else
            {
                roman[t] = 'D';
                t++;
                c = (c-500)/100;
                for(int i=0;i<c;i++)
                {
                    roman[t] = 'C';
                    t++;
                }
            }
        }
        else
        {
            roman[t] = 'M';
            t++;
            c = (c-1000)/1000;
            for(int i=0;i<c;i++)
            {
                roman[t] = 'M';
                t++;
            }
        }
    }
    string intToRoman(int num) {
         int a = num;
        int b = 1;
        
        while(a>10)
        {
            a = a/10;
            b = b * 10;
        }
         while(b!=0)
        {
            int c = (num/b)*b;
            num = num%b;
            b = b / 10;
            if(c==0) continue;
            else if(c==100)
            {
                roman[t] = 'C';
                t++;
            }
            else if(c==1000)
            {
                roman[t] = 'M';
                t++;
            }
            else if(c==500)
            {
                roman[t] = 'D';
                t++;
            }
            else if(c==50)
            {
                roman[t] = 'L';
                t++;
            }
            else if(c==10)
            {
                roman[t] = 'X';
                t++;
            }
            else if(c==5)
            {
                roman[t] = 'V';
                t++;
            }
            else if(c==1)
            {
                roman[t] = 'I';
                t++;
            }
            else
                ran(c);
        }
        return roman;
    }
};