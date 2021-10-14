#include <iostream>
using namespace std;
int main() {
    int n, x = 1;
    cin >> n;
    x++;
    while (n % x == 0) {
        cout << x;
        x++;
        continue;
    }

    return 0;
}