#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

bool ValidateString(string expression) {
    stack<char> s;

    for (char c: expression) {
        if (
            c == '(' || c == '{' || c == '['
        ) {
            s.push(c);
        } else if (
            c == ')' || c == '}' || c == ']' 
        ) {

            if (s.empty()) {
                return false;
            }

            char sym = s.top();
            s.pop();
            if ((c == '}' && sym != '{') || (c == ']' && sym != '[') || (c == ')' && sym != '(')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main () {

    vector<string> strs = {
        "()()()()",
        "({[)]})",
        "0",
        "10 + 12 * (12 + [} 12])"
    };
    

    for (string str: strs) {
        if (!ValidateString(str)) {
            cout << str << " is an invalid expression\n";
        } else {
            cout << str << " is a valid expression\n";
        }
    }

    return 0;
}