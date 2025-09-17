#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        for (int i = 0, j = numbers.size() - 1; i <= j;) {
            if (numbers[i] + numbers[j] == target) {
                std::vector<int> v;
                v.push_back(i + 1);
                v.push_back(j + 1);
                return v;
            }

            if (numbers[i] + numbers[j] > target) {
                j --;
            } else {
                i ++;
            }
        }

        std::vector<int> v;
        return v;
    }
};
