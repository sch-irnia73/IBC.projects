#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {

    int a, d;
    d = 0;
    cout << "array size: ";
    cin >> a;
    vector <int> n(a);

    for (int i = 0; i < a; i++) {
        cin >> n[i];
    }

    for (int i = 0; i < a; i++) {
        for (int c = 0; c < a-1; c++) {
            if (n[c] > n[c + 1]) {
                d = n[c];
                n[c] = n[c + 1];
                n[c + 1] = d;
            }
        }
    }
    for (int i = 0; i < a; i++) {
        cout << n[i] << " ";
    }
    return 0;
}
