class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int length = numbers.size();
        int i = 0, j = length - 1;

        while (i < j) {
            if (numbers[i] + numbers[j] > target) {
                j --;
                continue;
            }

            if (numbers[i] + numbers[j] < target) {
                i ++;
                continue;
            }

            vector<int> sum = {i + 1, j + 1};
            return sum;
        }

        vector<int> sum;
        return sum;
    }
};
