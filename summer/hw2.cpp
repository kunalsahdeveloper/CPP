#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j])
            result.push_back(a[i++]);
        else
            result.push_back(b[j++]);
    }

    while(i < a.size()) {
        result.push_back(a[i++]);
    }

    while(j < b.size()) {
        result.push_back(b[j++]);
    }

    return result;
}

int main() {
    vector<int> array1 = {1, 4, 6, 9};
    vector<int> array2 = {3, 5, 6, 7};

    vector<int> mergedArray = mergeSortedArrays(array1, array2);

    cout << "Merged array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
