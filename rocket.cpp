
#include <bits/stdc++.h>
using namespace std;
int main() {    
    int time;
    int countdown;
    cout << "Enter countdown time in min: ";
    cin >> time;
    countdown = time * 60;
    for (int i = countdown; i >= 0; i--) {
        cout << i << " seconds" << endl;
    }
    cout << "Rocket Launched!" << endl;
    return 0;
}