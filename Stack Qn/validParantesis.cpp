#include<iostream>
#include<stack>
using namespace std;


bool isValid(string s) {
    stack<char> st;

    int i=0;
    for(int i=0; i<s.length(); i++){


        if(s[i]==')' && st.size()!=0 && st.top()=='(') 
            st.pop();
        else if(s[i]=='}' && st.size()!=0 && st.top()=='{') 
            st.pop();
        else if(s[i]==']' && st.size()!=0 && st.top()=='[') 
            st.pop();

        else
            st.push(s[i]);

    }

    return (st.empty());

}

int main(){


    if(isValid("()[]{}"))
        cout<<"True";
    else    
        cout<<"False";



    return 0;
}