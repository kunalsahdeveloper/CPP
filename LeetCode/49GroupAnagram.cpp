
Given an array of strings strs, group the anagrams together. 
You can return the answer in any order.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:
There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.


Example 2:

Input: strs = [""]
Output: [[""]]

Example 3:

Input: strs = ["a"]

Output: [["a"]]







class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            
            map<string, vector<string>> mp;
            vector<vector<string>> res;
                   
            for(string s: strs){
                string temp = s;
                sort(s.begin(), s.end());
    
                mp[s].push_back(temp);
                
            }
    
            for(auto m: mp){
                res.push_back(m.second);
            }
    
            return res;
    
    
        }
    };