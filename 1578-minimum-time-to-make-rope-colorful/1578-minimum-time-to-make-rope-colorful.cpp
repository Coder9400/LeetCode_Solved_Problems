class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        int n = 0;
        for (int i = 0; colors[i] != '\0'; i++) {
            n++;
        }
        for (int i = 1; i < n; i++) {
            if (colors[i] == colors[i - 1]) {
                int a =
                    (neededTime[i] <= neededTime[i - 1] ? neededTime[i]
                                                        : neededTime[i - 1]);
                sum = sum + a;
                if (neededTime[i] >= neededTime[i - 1])
                    neededTime[i] == neededTime[i];
                else
                    neededTime[i] = neededTime[i - 1];
            }
        }
        return sum;
    }
};