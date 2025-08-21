#include <iostream>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if (marks >= 90) {
            cout << "grade A";
        } else if (marks >= 70) {
            cout << "grade B";
        } else if (marks >= 50) {
            cout << "grade C";
        } else if (marks >= 35) {
            cout << "grade D";
        } else {
            cout << "fail";
        }
    }
};

int main() {
    Solution obj;
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    obj.studentGrade(marks);
    return 0;
}
