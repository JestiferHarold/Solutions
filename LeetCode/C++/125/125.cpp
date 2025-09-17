#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int siz = s.size();

        if (siz == 0) return false;

        if (siz == 1) return true;

        string newstr;

        for (char a: s) {
            if (isalnum(a)) {
                newstr += tolower(a);
            }
        }

        int i = 0, j = newstr.size() - 1;

        while (i <= j) {
            if (newstr[i] != newstr[j]) return false;

            i ++, j --;
        }

        return true;
    }
};
