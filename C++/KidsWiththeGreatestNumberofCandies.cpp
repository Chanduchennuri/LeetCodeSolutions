/*

Source: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

Time: O(N), where N is the length of candies array i.e. N is the number of elements present in the array
Space: O(N), not in-place as we need a list of size equal to the size of candies array to store their corresponding boolean values

*/

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

    int max = 0;
    for(int candy : candies) {
      if(candy > max) {
        max = candy;
      }
    }

    max -= extraCandies;
    vector<bool> res;

    for(int candy : candies) {
      res.push_back(candy >= max);
    }

    return res;
  }
};
