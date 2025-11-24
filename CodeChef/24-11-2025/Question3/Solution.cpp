#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    pair<int,int> mostFrequent(vector<int> &arr) {
        unordered_map<int, int> saves;
        int val = 0, element = 0;
        
        for (auto x: arr) {
            saves[x]++;
            if (saves[x] > val) {
                element = x;
                val = saves[x];
            }
        }
        
        return {
            element, 
            val
        };
    }
};
