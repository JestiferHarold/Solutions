#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for (char c: s) {
            if (c == '(' || c == '[' || c == '{') {
                s1.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                
                if (s1.empty()) {
                    return false;
                }

                char letter = s1.top();
                s1.pop();
                
                if (
                    (
                        c == '}' && letter != '{'
                    ) ||
                    (
                        c == ']' && letter != '['
                    ) ||
                    (
                        c == ')' && letter != '('
                    )
                ) {
                    return false;
                }
            } 
        }

        return s1.empty();
    }
};