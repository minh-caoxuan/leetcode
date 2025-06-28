/*Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. 
The returned string should only have a single space separating the words. Do not include any extra spaces.*/
#include<string>
class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
        string result;
        int i = size - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') --i;
            if (i < 0) break;
            int j = i;
            while (i >= 0 && s[i] != ' ') --i;
            if (result != "") result += " ";
            for (int k = i + 1; k <= j; ++k) result += s[k];
        }
        return result;
    }
};
