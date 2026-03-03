/* 
Example

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
*/

/*
  merged string always starts with word1
  if a string is longer than the other, append the additional letters onto the end of the merged string
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      string result = "";
      int i = 0, j = 0;
      int iMax = word1.size();
      int jMax = word2.size();
      // if one or the other (i or j) hits the end of its string, exit the while loop
      while (i < iMax || j < jMax) {
        if (i < iMax) {
        }
      }
      
      return result;
    }
};
