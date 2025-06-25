/* You are given two strings word1 and word2. 
Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.*/
#include <string>;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;
        int len1 = word1.size(), len2 = word2.size();
        while (i < len1 && j < len2) {
            result += word1[i++];
            result += word2[j++];
        }
        while (i < len1) result += word1[i++];
        while (j < len2) result += word2[j++];
        return result;
    }
};
