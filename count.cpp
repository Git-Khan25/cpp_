

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
    cout << "Enter the element to count:" << endl;
    cin >> k;
    cout<<count(arr, arr + n, k)<<endl;
if (count(arr, arr + n, k) > 0) {
    cout << "Element " << k << " is present in the array." << endl;
} else {
    cout << "Element " << k << " is not present in the array." << endl;
}
    return 0;
}