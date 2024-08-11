#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int N;
    cin >> N;
    while (N > 0) {
        int n;
        cin >> n;

        set < int > s;

        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            if (s.find(t) == s.end()) {
                s.insert(t);
            } else {
                s.erase(t);
            }
        }
        cout << * s.begin() << endl;
        
        N--;
    }

}