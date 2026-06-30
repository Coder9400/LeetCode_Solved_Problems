class Solution {
public:
    int countCollisions(string directions) {
        stack<char> sp;
        int count = 0;
        sp.push(directions[0]);
        int n = directions.length();
        for (int i = 1; i < n; i++) {
            char ch = directions[i];
            if (sp.top() == 'R' && ch == 'L') {
                count += 2;
                sp.pop();
                ch = 'S';
            } else if (sp.top() == 'S' && ch == 'L') {
                count += 1;
                sp.pop();
                ch = 'S';
            }
            while (!sp.empty() && ch == 'S' && sp.top() == 'R') {
                sp.pop();
                count += 1;
            }
            sp.push(ch);
        }
        return count;
    }
};