/* 
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
      // if one OR the other (i or j) hits the end of its string, exit the while loop
      // OR also allows for add. letters from word1/word2 to be appended on the end of the string w/o triggering errors
      while (i < iMax || j < jMax) {
        //push_back() appends at the end of the string
        if (i < iMax) {
          //strings are mutable in C++
          result.push_back(word1[i++]);
        }
        if (j < jMax) {
          result.push_back(word2[i++]);
        }
      }
      
      return result;
    }
};
