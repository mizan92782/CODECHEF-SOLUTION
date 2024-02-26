#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<string> s;
        int count=0;

        for (int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            bitset<32> bits(num);
            string x=bits.to_string();
            if(s.count(x)==1)
            {
                count++;
            }
        }

        cout << s.size() << endl;
    }
    return 0;
}

