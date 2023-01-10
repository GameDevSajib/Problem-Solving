#include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int n) {
vector<int> result;
result.push_back(1);  // Initialize the result to 1

    // Calculate the factorial
    for (int i = 2; i <= n; i++) {
        int carry = 0;  // Initialize the carry to 0
        for (size_t j = 0; j < result.size() || carry; j++) {
            if (j == result.size()) {
                result.push_back(0);
            }
            result[j] = result[j] * i + carry;
            carry = result[j] / 10;
            result[j] %= 10;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> result = factorial(n);
        for (int i = result.size() - 1; i >= 0; i--) {
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}

