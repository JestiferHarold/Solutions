/**
 * Given an integer x, return true if x is a

, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

 */

#include <stack>
#include <string>

using namespace std;

/**
 * Stack Approach
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x == 0) {
            return true;
        }

        stack<char> s;
        string g = to_string(x);
        int stringlengh = g.size();

        for (int i = 0; i < stringlengh; i ++) {
            s.push(g[i]);
        }

        for (int j = 0; j < stringlengh; j ++, s.pop()) {
            if (g[j] != s.top()) return false; 
        }

        return true;
    }
};

/**
 * Two pointer Approach
 */

#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        string s = to_string(x);
        
        for (int i = 0, j = s.size() - 1; i <= j; i++, j --) {
            if (s[i] != s[j]) return false;
        }

        return true;
    }
};