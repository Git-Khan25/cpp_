

#include <iostream>
using namespace std;
class Prime {
private:
    int number;

    int isPrime(int num) {
        if (num <= 1) return 0; 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return 0; 
            }
        }
        return 1; 
    }       
public:
    void input() {
        cout << "Enter a positive integer: ";
        cin >> number;
    }
    void displayPrime() {
        if (isPrime(number)) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};
int main() {
    Prime primeChecker;
    primeChecker.input();
    primeChecker.displayPrime();
    return 0;
}
