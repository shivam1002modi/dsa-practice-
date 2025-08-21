#include <iostream>
using namespace std;

void increaseByReference(int &x) {
    x = x + 10; // changes original
}

int main() {
    int a = 5;
    increaseByReference(a);
    cout << a; // Output: 15 (changed)
    return 0;
}
