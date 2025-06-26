/*You have a long flowerbed in which some of the plots are planted, and some are not. 
However, flowers cannot be planted in adjacent plots.
Given integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, 
and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.*/
#include<vector>
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int numFlowers = static_cast<int>(flowerbed.size());
        int count = 0;
        for (int i = 0; i < numFlowers; ++i) {
            if (flowerbed[i] == 0 
            && (i == 0 || flowerbed[i - 1] == 0) 
            && (i == numFlowers - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                ++count;
                if (count >= n) return true;
            }
        }
        return (count >= n);
    }
};
