#include <iostream>
using namespace std;

int sum(int K) {
    if (K > 0) {
        return K + sum(K - 1);
    } else {
        return 0;
    }
}

int main() {
    int K;
    cout << "Enter num: ";
    cin >> K;

    if (K < 0) {
        cout << "number." << endl;
    } else {
        cout << "The sum of num: " << K << " is: " << sum(K) << endl;
    }

    return 0;
}