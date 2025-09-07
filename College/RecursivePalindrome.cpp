#include <string>
#include <iostream>

using namespace std;

bool isValidPalindromeTwoPointer(string s, int leftp, int rightp) {
    if (leftp >= rightp) {
        return true;
    }

    if (s[rightp] != s[leftp]) {
        return false;
    }

    return isValidPalindromeTwoPointer(s, rightp --, leftp ++);
}

// bool isValidPalindrome(string s, int index) {
//     if (index == 0) return true;

//     isValidPalindrome(s, index --);

//     if ()
// }

int main() {
    string str1 = "malayalam";
    string str2 = "food";

    if (isValidPalindromeTwoPointer(str1, 0, str1.size() - 1)) {
        cout << str1 << " is a valid palindrome";
    } else {
        cout << str1 << " is not a valid palindrome";
    }

    if (isValidPalindromeTwoPointer(str2, 0, str2.size() - 1)) {
        cout << "\n" << str2 << " is a valid palindrome";
    } else {
        cout << "\n" << str2 << " is not a valid palindrome";
    }

    return 0;
}