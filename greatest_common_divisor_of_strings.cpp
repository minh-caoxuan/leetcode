/*For two strings s and t, 
we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.*/
#include <string>
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        int len1 = str1.size(), len2 = str2.size();
        while (len2 != 0) {
            int len = len1 % len2;
            len1 = len2;
            len2 = len;
        }
        string result = "";
        for (int i = 0; i < len1; ++i) {
            result += str1[i];
        }
        return result;
    }
};
