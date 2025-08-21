//taking input as a number and displaying the same 

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumber() {
        int a; 
        cin >> a;   // Taking input
        cout << a;  // Printing output
    }
};

int main() {
    Solution obj; 
    obj.printNumber(); // Call the function
    return 0;
}
