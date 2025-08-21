#include <iostream>
using namespace std;

void increaseByValue(int x) {
    x = x + 10; // changes only copy
}

int main() {
    int a = 5;
    increaseByValue(a);
    cout << a; // Output: 5 (unchanged)
    return 0;
}
