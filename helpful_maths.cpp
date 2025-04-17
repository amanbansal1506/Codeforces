#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;
int main() {
    string str;
    cin >> str;
    vector<int> v;
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (isdigit(str[i])) {
            v.push_back(str[i] - '0'); 
        }
    }
    sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}
