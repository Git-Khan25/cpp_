//fib of a number incpp using class
#include <iostream>
using namespace std;
class Fibonacci {
private:
    int terms;

    void generateFibonacci(int n) {
        int t1 = 0, t2 = 1, nextTerm;
        cout << "Fibonacci Series: " << t1 << ", " << t2;

        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            cout << ", " << nextTerm;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << endl;
    }

public:
    void input() {
        cout << "Enter the number of terms for Fibonacci series: ";
        cin >> terms;
    }

    void displayFibonacci() {
        if (terms <= 0) {
            cout << "Please enter a positive integer." << endl;
        } else if (terms == 1) {
            cout << "Fibonacci Series: 0" << endl;
        } else {
            generateFibonacci(terms);
        }
    }
};
int main() {
    Fibonacci fibCalculator;
    fibCalculator.input();
    fibCalculator.displayFibonacci();
    return 0;
}       
