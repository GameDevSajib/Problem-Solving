/*
amak akta array dewa takbe 6,7,8,9
amak ja korte hbe:
6*1000
7*100
8*10
9*1




*/
#include <iostream>

using namespace std;

int main() {
    int arr[] = {6, 7, 8, 9};
    int res[4] = {0};

    for (int i = 0; i < 4; i++) {
        int multiplier = 1;
        for (int j = i + 1; j < 4; j++) {
            multiplier *= 10;
        }
        res[i] = arr[i] * multiplier;
    }

    for (int i = 0; i < 4; i++) {
        cout << "res[" << i << "] = " << res[i] << endl;
    }

    return 0;
}

