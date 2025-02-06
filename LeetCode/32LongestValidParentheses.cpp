// Given a string containing just the characters '(' and ')', return the 
// length of the longest valid (well-formed) parentheses substring

// Example 1:
// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".

// Example 2:
// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".

// Example 3:
// Input: s = ""
// Output: 0


class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int res =0;
        st.push(-1);

        for(int i=0; i<s.length(); i++){
            if(s[i] == ')' && st.size() > 1 && s[st.top()]=='('){
                st.pop();
                res = max(res, i-st.top());
            }else
                st.push(i);

        }
        return res;

    }
};
