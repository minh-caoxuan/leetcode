/*Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.*/
#include<string>
#include<algorithm>
class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int left = 0, right = s.size() - 1;
        while (left < right) {
            while (left < right && vowels.find(s[left]) == string::npos) ++left;
            while (left < right && vowels.find(s[right]) == string::npos) --right;
            if (left < right) swap(s[left++], s[right--]);
        }
        return s;
    }
};
