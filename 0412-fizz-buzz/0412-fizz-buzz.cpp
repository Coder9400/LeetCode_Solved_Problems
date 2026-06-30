class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> nums;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                nums.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                nums.push_back("Fizz");
            } else if (i % 5 == 0) {
                nums.push_back("Buzz");
            } else {
                nums.push_back(to_string(i));
            }
        }
        return nums;
    }
};