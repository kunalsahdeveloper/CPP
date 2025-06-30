#include <iostream>
#include <vector>

vector<int> mergeSortedArrays(const std::vector<int>& a, const std::vector<int>& b) {
    vector<int> result;

    int i = 0, j = 0;
    
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }
    return result;
}

int main() {
    using namespace std;
    vector<int> a = {1, 4, 6, 9};
    vector<int> b = {3, 5, 6, 7};
    vector<int> merged = mergeSortedArrays(a, b);

    cout << "[";
    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i];
        if (i != merged.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}