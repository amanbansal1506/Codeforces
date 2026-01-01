#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int seen[26] = {0};
        int balloons = 0;
        for (char c : s) {
            int idx = c - 'A';
            if (seen[idx] == 0) {
                balloons += 2;
                seen[idx] = 1;
            } else {
                balloons += 1;
            }
        }
        cout << balloons << "\n";
    }
    return 0;
}
