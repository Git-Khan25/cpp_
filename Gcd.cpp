
#include <iostream>
using namespace std;    
class GCD {
private:
    int num1, num2;

    int GCDcalc(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:

    void input() {
        cout << "Enter two positive integers: ";
        cin >> num1 >> num2;
    }

    void displayGCD() {
        int gcd = GCDcalc(num1, num2);
        cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    }
};  
int main() {
    GCD gcdCalculator;
    gcdCalculator.input();
    gcdCalculator.displayGCD();
    return 0;
}

