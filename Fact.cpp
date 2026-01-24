
#include <iostream>
using namespace std;
class Factorial {
private:
    int number;

    unsigned long long factorial(int num) {
        if (num < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return 0;
        }
        unsigned long long result = 1;
        for (int i = 1; i <= num; ++i) {
            result *= i;
        }
        return result;
    }   
public:

    void input() {
        cout << "Enter a non-negative integer: ";
        cin >> number;
    }
    void displayFactorial() {
        unsigned long long fact = factorial(number);
        if (fact != 0) {
            cout << "Factorial of " << number << " is: " << fact << endl;
        }
    }
};      
int main() {
    Factorial factCalculator;
    factCalculator.input();
    factCalculator.displayFactorial();
    return 0;
}