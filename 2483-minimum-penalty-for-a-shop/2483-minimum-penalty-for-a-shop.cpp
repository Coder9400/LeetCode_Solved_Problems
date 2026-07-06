class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int> vec1, vec2, vec3, vec4;
        int n = customers.size();
        for (int i = 0; i < n; i++) {
            if (customers[i] == 'N')
                vec1.push_back(1);
            else
                vec1.push_back(0);
        }
        for (int i = 0; i < n; i++) {
            if (customers[i] == 'Y')
                vec2.push_back(1);
            else
                vec2.push_back(0);
        }
        for (int i = 1; i < n; i++) {
            vec1[i] = vec1[i] + vec1[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            vec2[i] = vec2[i + 1] + vec2[i];
        }
        vec3.push_back(0);
        for (int i = 0; i < n; i++) {
            vec3.push_back(vec1[i]);
        }
        for (int i = 0; i < n; i++) {
            vec4.push_back(vec2[i]);
        }
        vec4.push_back(0);
        int min = INT_MAX;
        for (int i = 0; i < vec4.size(); i++) {
            vec4[i] = vec3[i] + vec4[i];
            if (vec4[i] <= min)
                min = vec4[i];
        }
        for (int i = 0; i < vec4.size(); i++) {
            if (vec4[i] == min)
                return i;
        }
        return 0;
    }
};