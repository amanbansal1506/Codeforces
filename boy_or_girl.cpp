#include<iostream>
#include<set>
using namespace std;

int main() {
    string str;
    cin >> str;
    set<char> s(str.begin(), str.end());

    cout << (s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
