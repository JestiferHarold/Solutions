#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int sizeS = s.size();
        
        if (sizeS == 0) return false;

        if (sizeS == 1) return true;

        string newString;

        for(char a: s) {
            if (isalnum(a)) {
                newString += tolower(a);
            }
        }

        int i = 0, j = newString.size() - 1;

        while (i <= j) {
            if (newString[i] != newString[j]) return false;
            i ++, j --; 
        }

        return true;
    }
};
