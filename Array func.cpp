 
 #include<bits/stdc++.h>
 using namespace std;   
   int main() {
       int n;
         cin >> n;
        int arr[n];
        cout << "Enter array elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout<<min_element(arr, arr + n)<<endl;  //min
        cout<<max_element(arr, arr + n)<<endl;//max
        cout<<accumulate(arr, arr + n, 0)<<endl;//add
        reverse(arr, arr + n);//reverse entire array
        reverse(arr, arr + 3);//reverse first 3 elements
        sort(arr, arr + n);//sort in ascending order
        sort(arr,arr + n, greater<int>());//sort in descending order
        cout << "Sorted array elements:" << endl;
        for (int i = 0; i < n; i++) {
            
            cout << arr[i] << " " <<endl;
       
    }
}
