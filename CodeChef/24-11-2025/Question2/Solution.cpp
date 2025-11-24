class Solution {
public:
    int compute(int n, int x, vector<int>& a, vector<int>& b) {
        int sum  = 0;
        for (int i = 0; i < n; i ++) {
            if (a[i] >= x) sum += b[i];
        }
        
        return sum;
    }
};
