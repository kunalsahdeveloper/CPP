#include <iostream>
#include <algorithm>

using namespace std;

int minRemovalsToBalance(const string& s) {
    int open = 0, close = 0;
    for (char c : s) {
        if (c == '(') open++;
        else if (c == ')') {
            if (open > 0) open--;
            else close++;
        }
    }
    return open + close;
}

vector<int> nextSmallerElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() >= arr[i]) st.pop();
        if (!st.empty()) res[i] = st.top();
        st.push(arr[i]);
    }
    return res;
}

void removeFromStack(stack<int>& st, int pos) {
    vector<int> temp;
    while (!st.empty()) {
        temp.push_back(st.top());
        st.pop();
    }
    if (pos < 0 || pos >= temp.size()) return; 
    temp.erase(temp.begin() + pos);
    for (int i = temp.size() - 1; i >= 0; --i) {
        st.push(temp[i]);
    }
}


int main() {

    string s = "(()))(";
    cout << "Min removals: " << minRemovalsToBalance(s) << endl;

    vector<int> arr = {4, 5, 2, 10, 8};
    auto res = nextSmallerElement(arr);
    cout << "Next Smaller Elements: ";
    for (int x : res) cout << x << " ";
    cout << endl;

    stack<int> st;
    for (int x : {1, 2, 3, 4, 5}) st.push(x); 
    removeFromStack(st, 2); 
    cout << "Stack after removal: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}