#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    k=k%n; 
    cout << "Enter the number of rotations:" << endl;
    cin >> k;
    reverse(arr, arr + n);
    reverse (arr,arr + k);
    reverse(arr + k, arr + n);
    cout << "Array after " << k << " rotations:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}